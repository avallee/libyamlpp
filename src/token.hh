#ifndef SRC_TOKEN_HH_
#define SRC_TOKEN_HH_

class token {
    enum token_type {
        ALIAS,                        ANCHOR,
        BLOCK_SEQUENCE_ELEMENT_START, COMPLEX_MAPPING_KEY,
        DOCUMENT_BEGIN,               DOCUMENT_END,
        ESCAPE_SEQUENCE,              FLOW_MAPPING_END,
        FLOW_MAPPING_START,           FLOW_SEQUENCE_END,
        FLOW_SEQUENCE_START,          FOLDED_STYLE,
        HANDLE,                       IDENTIFIER,
        INTEGER,                      LITERAL_STYLE,
        LOCAL_TAG,                    NULL,
        PAIR_SEPARATOR,               STANDARD_TAG,
        STRING,                       TAG,
        TAG_DIRECTIVE,                URI,
        VERSION_DIRECTIVE
    } tag;
};

#endif // SRC_TOKEN_HH_