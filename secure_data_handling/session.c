#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - create a new session
 */
session_t *session_create(const char *id, unsigned int uid,
	const unsigned char *data, size_t data_len)
{
	session_t *s;

	s = malloc(sizeof(*s));
	if (!s)
		return (NULL);

	/* Deep copy of id */
	s->id = strdup(id);
	if (!s->id)
	{
		free(s);
		return (NULL);
	}

	s->uid = uid;

	/* Copy data if exists */
	if (data_len > 0)
	{
		s->data = malloc(data_len);
		if (!s->data)
		{
			free(s->id);
			free(s);
			return (NULL);
		}
		memcpy(s->data, data, data_len);
		s->data_len = data_len;
	}
	else
	{
		s->data = NULL;
		s->data_len = 0;
	}

	return (s);
}

/**
 * session_set_data - update session data safely
 */
int session_set_data(session_t *s, const unsigned char *data,
	size_t data_len)
{
	unsigned char *tmp;

	if (!s)
		return (0);

	/* Clear data */
	if (data_len == 0)
	{
		free(s->data);
		s->data = NULL;
		s->data_len = 0;
		return (1);
	}

	/* Safe realloc */
	tmp = realloc(s->data, data_len);
	if (!tmp)
		return (0);

	s->data = tmp;

	memcpy(s->data, data, data_len);
	s->data_len = data_len;

	return (1);
}

/**
 * session_destroy - free session safely
 */
void session_destroy(session_t *s)
{
	if (!s)
		return;

	free(s->id);
	free(s->data);
	free(s);
}
