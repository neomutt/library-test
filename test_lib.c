#include "config.h"
#include <errno.h>
#include <locale.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "mutt/lib.h"
#include "history/lib.h"

void test_base64(void)
{
  // const int Index64[];

  // int                     mutt_b64_buffer_decode            (struct Buffer *buf, const char *in);
  // size_t                  mutt_b64_buffer_encode            (struct Buffer *buf, const char *in, size_t len);
  // int                     mutt_b64_decode                   (const char *in, char *out, size_t olen);
  // size_t                  mutt_b64_encode                   (const char *in, size_t inlen, char *out, size_t outlen);

  char buffer[16];
  char *msg = "hello";
  mutt_b64_encode(msg, strlen(msg), buffer, sizeof(buffer));
}

void test_buffer(void)
{
  // int                     mutt_buffer_add_printf            (struct Buffer *buf, const char *fmt, ...);
  // size_t                  mutt_buffer_addch                 (struct Buffer *buf, char c);
  // size_t                  mutt_buffer_addstr                (struct Buffer *buf, const char *s);
  // size_t                  mutt_buffer_addstr_n              (struct Buffer *buf, const char *s, size_t len);
  // void                    mutt_buffer_alloc                 (struct Buffer *buf, size_t new_size);
  // size_t                  mutt_buffer_concat_path           (struct Buffer *buf, const char *dir, const char *fname);
  // size_t                  mutt_buffer_concatn_path          (struct Buffer *buf, const char *dir, size_t dirlen, const char *fname, size_t fnamelen);
  // size_t                  mutt_buffer_copy                  (struct Buffer *dst, const struct Buffer *src);
  // void                    mutt_buffer_dealloc               (struct Buffer *buf);
  // void                    mutt_buffer_fix_dptr              (struct Buffer *buf);
  // struct Buffer *         mutt_buffer_init                  (struct Buffer *buf);
  // bool                    mutt_buffer_is_empty              (const struct Buffer *buf);
  // size_t                  mutt_buffer_len                   (const struct Buffer *buf);
  // struct Buffer           mutt_buffer_make                  (size_t size);
  // int                     mutt_buffer_printf                (struct Buffer *buf, const char *fmt, ...);
  // void                    mutt_buffer_reset                 (struct Buffer *buf);
  // void                    mutt_buffer_seek                  (struct Buffer *buf, size_t offset);
  // size_t                  mutt_buffer_strcpy                (struct Buffer *buf, const char *s);
  // size_t                  mutt_buffer_strcpy_n              (struct Buffer *buf, const char *s, size_t len);
  // char *                  mutt_buffer_strdup                (const struct Buffer *buf);
  // size_t                  mutt_buffer_substrcpy             (struct Buffer *buf, const char *beg, const char *end);

  struct Buffer *b = NULL;
  mutt_buffer_dealloc(b);
}

void test_charset(void)
{
  // char *C_AssumedCharset;
  // char *C_Charset;
  // bool CharsetIsUtf8;
  // wchar_t ReplacementChar;
  // const struct MimeNames PreferredMimeNames[];

  // void                    mutt_ch_canonical_charset         (char *buf, size_t buflen, const char *name);
  // const char *            mutt_ch_charset_lookup            (const char *chs);
  // int                     mutt_ch_check                     (const char *s, size_t slen, const char *from, const char *to);
  // bool                    mutt_ch_check_charset             (const char *cs, bool strict);
  // char *                  mutt_ch_choose                    (const char *fromcode, const char *charsets, const char *u, size_t ulen, char **d, size_t *dlen);
  // bool                    mutt_ch_chscmp                    (const char *cs1, const char *cs2);
  // int                     mutt_ch_convert_nonmime_string    (char **ps);
  // int                     mutt_ch_convert_string            (char **ps, const char *from, const char *to, uint8_t flags);
  // int                     mutt_ch_fgetconv                  (struct FgetConv *fc);
  // void                    mutt_ch_fgetconv_close            (struct FgetConv **fc);
  // struct FgetConv *       mutt_ch_fgetconv_open             (FILE *fp, const char *from, const char *to, uint8_t flags);
  // char *                  mutt_ch_fgetconvs                 (char *buf, size_t buflen, struct FgetConv *fc);
  // char *                  mutt_ch_get_default_charset       (void);
  // char *                  mutt_ch_get_langinfo_charset      (void);
  // size_t                  mutt_ch_iconv                     (iconv_t cd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft, const char **inrepls, const char *outrepl, int *iconverrno);
  // const char *            mutt_ch_iconv_lookup              (const char *chs);
  // iconv_t                 mutt_ch_iconv_open                (const char *tocode, const char *fromcode, uint8_t flags);
  // bool                    mutt_ch_lookup_add                (enum LookupType type, const char *pat, const char *replace, struct Buffer *err);
  // void                    mutt_ch_lookup_remove             (void);
  // void                    mutt_ch_set_charset               (const char *charset);

  mutt_ch_chscmp("us-ascii", "utf-8");
}

void test_date(void)
{
  // time_t                  mutt_date_add_timeout             (time_t now, time_t timeout);
  // int                     mutt_date_check_month             (const char *s);
  // time_t                  mutt_date_epoch                   (void);
  // uint64_t                mutt_date_epoch_ms                (void);
  // struct tm               mutt_date_gmtime                  (time_t t);
  // time_t                  mutt_date_local_tz                (time_t t);
  // struct tm               mutt_date_localtime               (time_t t);
  // size_t                  mutt_date_localtime_format        (char *buf, size_t buflen, const char *format, time_t t);
  // void                    mutt_date_make_date               (struct Buffer *buf);
  // int                     mutt_date_make_imap               (char *buf, size_t buflen, time_t timestamp);
  // time_t                  mutt_date_make_time               (struct tm *t, bool local);
  // int                     mutt_date_make_tls                (char *buf, size_t buflen, time_t timestamp);
  // void                    mutt_date_normalize_time          (struct tm *tm);
  // time_t                  mutt_date_parse_date              (const char *s, struct Tz *tz_out);
  // time_t                  mutt_date_parse_imap              (const char *s);
  // void                    mutt_date_sleep_ms                (size_t ms);

  mutt_date_local_tz(1501596063);
}

void test_envlist(void)
{
  // void                    mutt_envlist_free                 (void);
  // char **                 mutt_envlist_getlist              (void);
  // void                    mutt_envlist_init                 (char *envp[]);
  // bool                    mutt_envlist_set                  (const char *name, const char *value, bool overwrite);
  // bool                    mutt_envlist_unset                (const char *name);

  char *dummy[] = { "apple", "banana", "cherry", NULL };

  mutt_envlist_init(dummy);
  mutt_envlist_free();
}

void test_file(void)
{
  // char *C_Tmpdir;

  // void                    mutt_buffer_file_expand_fmt_quote (struct Buffer *dest, const char *fmt, const char *src);
  // void                    mutt_buffer_quote_filename        (struct Buffer *buf, const char *filename, bool add_outer);
  // int                     mutt_file_check_empty             (const char *path);
  // int                     mutt_file_chmod                   (const char *path, mode_t mode);
  // int                     mutt_file_chmod_add               (const char *path, mode_t mode);
  // int                     mutt_file_chmod_add_stat          (const char *path, mode_t mode, struct stat *st);
  // int                     mutt_file_chmod_rm                (const char *path, mode_t mode);
  // int                     mutt_file_chmod_rm_stat           (const char *path, mode_t mode, struct stat *st);
  // int                     mutt_file_copy_bytes              (FILE *fp_in, FILE *fp_out, size_t size);
  // int                     mutt_file_copy_stream             (FILE *fp_in, FILE *fp_out);
  // time_t                  mutt_file_decrease_mtime          (const char *fp, struct stat *st);
  // void                    mutt_file_expand_fmt              (struct Buffer *dest, const char *fmt, const char *src);
  // int                     mutt_file_fclose                  (FILE **fp);
  // FILE *                  mutt_file_fopen                   (const char *path, const char *mode);
  // int                     mutt_file_fsync_close             (FILE **fp);
  // long                    mutt_file_get_size                (const char *path);
  // void                    mutt_file_get_stat_timespec       (struct timespec *dest, struct stat *sb, enum MuttStatType type);
  // bool                    mutt_file_iter_line               (struct MuttFileIter *iter, FILE *fp, ReadLineFlags flags);
  // int                     mutt_file_lock                    (int fd, bool excl, bool timeout);
  // bool                    mutt_file_map_lines               (mutt_file_map_t func, void *user_data, FILE *fp, ReadLineFlags flags);
  // int                     mutt_file_mkdir                   (const char *path, mode_t mode);
  // FILE *                  mutt_file_mkstemp_full            (const char *file, int line, const char *func);
  // int                     mutt_file_open                    (const char *path, uint32_t flags);
  // size_t                  mutt_file_quote_filename          (const char *filename, char *buf, size_t buflen);
  // char *                  mutt_file_read_keyword            (const char *file, char *buf, size_t buflen);
  // char *                  mutt_file_read_line               (char *line, size_t *size, FILE *fp, int *line_num, ReadLineFlags flags);
  // int                     mutt_file_rename                  (const char *oldfile, const char *newfile);
  // void                    mutt_file_resolve_symlink         (struct Buffer *buf);
  // int                     mutt_file_rmtree                  (const char *path);
  // int                     mutt_file_safe_rename             (const char *src, const char *target);
  // void                    mutt_file_sanitize_filename       (char *path, bool slash);
  // int                     mutt_file_sanitize_regex          (struct Buffer *dest, const char *src);
  // void                    mutt_file_set_mtime               (const char *from, const char *to);
  // int                     mutt_file_stat_compare            (struct stat *sba, enum MuttStatType sba_type, struct stat *sbb, enum MuttStatType sbb_type);
  // int                     mutt_file_stat_timespec_compare   (struct stat *sba, enum MuttStatType type, struct timespec *b);
  // int                     mutt_file_symlink                 (const char *oldpath, const char *newpath);
  // int                     mutt_file_timespec_compare        (struct timespec *a, struct timespec *b);
  // void                    mutt_file_touch_atime             (int fd);
  // void                    mutt_file_unlink                  (const char *s);
  // void                    mutt_file_unlink_empty            (const char *path);
  // int                     mutt_file_unlock                  (int fd);

  mutt_file_mkdir("tmp", 0660);
}

void test_filter(void)
{
  // pid_t                   filter_create                     (const char *cmd, FILE **fp_in, FILE **fp_out, FILE **fp_err);
  // pid_t                   filter_create_fd                  (const char *cmd, FILE **fp_in, FILE **fp_out, FILE **fp_err, int fdin, int fdout, int fderr);
  // int                     filter_wait                       (pid_t pid);

  filter_wait(-1);
}

void test_hash(void)
{
  // void                    mutt_hash_delete                  (struct HashTable *table, const char *strkey, const void *data);
  // void *                  mutt_hash_find                    (const struct HashTable *table, const char *strkey);
  // struct HashElem *       mutt_hash_find_bucket             (const struct HashTable *table, const char *strkey);
  // struct HashElem *       mutt_hash_find_elem               (const struct HashTable *table, const char *strkey);
  // void                    mutt_hash_free                    (struct HashTable **ptr);
  // struct HashElem *       mutt_hash_insert                  (struct HashTable *table, const char *strkey, void *data);
  // void                    mutt_hash_int_delete              (struct HashTable *table, unsigned int intkey, const void *data);
  // void *                  mutt_hash_int_find                (const struct HashTable *table, unsigned int intkey);
  // struct HashElem *       mutt_hash_int_insert              (struct HashTable *table, unsigned int intkey, void *data);
  // struct HashTable *      mutt_hash_int_new                 (size_t num_elems, HashFlags flags);
  // struct HashTable *      mutt_hash_new                     (size_t num_elems, HashFlags flags);
  // void                    mutt_hash_set_destructor          (struct HashTable *table, hash_hdata_free_t fn, intptr_t fn_data);
  // struct HashElem *       mutt_hash_typed_insert            (struct HashTable *table, const char *strkey, int type, void *data);
  // struct HashElem *       mutt_hash_walk                    (const struct HashTable *table, struct HashWalkState *state);

  struct HashTable *h = NULL;
  mutt_hash_free(&h);
}

void test_list(void)
{
  // void                    mutt_list_clear                   (struct ListHead *h);
  // bool                    mutt_list_compare                 (const struct ListHead *ah, const struct ListHead *bh);
  // struct ListNode *       mutt_list_find                    (const struct ListHead *h, const char *data);
  // void                    mutt_list_free                    (struct ListHead *h);
  // void                    mutt_list_free_type               (struct ListHead *h, list_free_t fn);
  // struct ListNode *       mutt_list_insert_after            (struct ListHead *h, struct ListNode *n, char *s);
  // struct ListNode *       mutt_list_insert_head             (struct ListHead *h, char *s);
  // struct ListNode *       mutt_list_insert_tail             (struct ListHead *h, char *s);
  // bool                    mutt_list_match                   (const char *s, struct ListHead *h);
  // size_t                  mutt_list_str_split               (struct ListHead *head, const char *src, char sep);

  struct ListHead head = STAILQ_HEAD_INITIALIZER(head);

  struct ListNode *node = mutt_list_find(&head, "hello");
  if (node)
    printf("found\n");
}

void test_logging(void)
{
  // log_dispatcher_t MuttLogger;

  // int                     log_disp_file                     (time_t stamp, const char *file, int line, const char *function, enum LogLevel level, ...);
  // int                     log_disp_null                     (time_t stamp, const char *file, int line, const char *function, enum LogLevel level, ...);
  // int                     log_disp_queue                    (time_t stamp, const char *file, int line, const char *function, enum LogLevel level, ...);
  // int                     log_disp_terminal                 (time_t stamp, const char *file, int line, const char *function, enum LogLevel level, ...);
  // void                    log_file_close                    (bool verbose);
  // int                     log_file_open                     (bool verbose);
  // bool                    log_file_running                  (void);
  // int                     log_file_set_filename             (const char *file, bool verbose);
  // int                     log_file_set_level                (enum LogLevel level, bool verbose);
  // void                    log_file_set_version              (const char *version);
  // int                     log_queue_add                     (struct LogLine *ll);
  // void                    log_queue_empty                   (void);
  // void                    log_queue_flush                   (log_dispatcher_t disp);
  // int                     log_queue_save                    (FILE *fp);
  // void                    log_queue_set_max_size            (int size);

  log_file_set_level(3, false);
}

void test_mapping(void)
{
  // const char *            mutt_map_get_name                 (int val, const struct Mapping *map);
  // int                     mutt_map_get_value                (const char *name, const struct Mapping *map);
  // int                     mutt_map_get_value_n              (const char *name, size_t len, const struct Mapping *map);

  struct Mapping m[] = { { "apple", 1 }, { NULL, 0 } };

  mutt_map_get_name(1, m);
}

void test_mbyte(void)
{
  // bool OptLocales;

  // int                     mutt_mb_charlen                   (const char *s, int *width);
  // int                     mutt_mb_filter_unprintable        (char **s);
  // bool                    mutt_mb_get_initials              (const char *name, char *buf, size_t buflen);
  // bool                    mutt_mb_is_display_corrupting_utf8(wchar_t wc);
  // bool                    mutt_mb_is_lower                  (const char *s);
  // bool                    mutt_mb_is_shell_char             (wchar_t ch);
  // size_t                  mutt_mb_mbstowcs                  (wchar_t **pwbuf, size_t *pwbuflen, size_t i, const char *buf);
  // void                    mutt_mb_wcstombs                  (char *dest, size_t dlen, const wchar_t *src, size_t slen);
  // int                     mutt_mb_wcswidth                  (const wchar_t *s, size_t n);
  // int                     mutt_mb_wcwidth                   (wchar_t wc);
  // int                     mutt_mb_width                     (const char *str, int col, bool display);
  // size_t                  mutt_mb_width_ceiling             (const wchar_t *s, size_t n, int w1);

  mutt_mb_charlen("hello", NULL);
}

void test_md5(void)
{
  // void *                  mutt_md5                          (const char *str, void *buf);
  // void *                  mutt_md5_bytes                    (const void *buffer, size_t len, void *resbuf);
  // void *                  mutt_md5_finish_ctx               (struct Md5Ctx *md5ctx, void *resbuf);
  // void                    mutt_md5_init_ctx                 (struct Md5Ctx *md5ctx);
  // void                    mutt_md5_process                  (const char *str, struct Md5Ctx *md5ctx);
  // void                    mutt_md5_process_bytes            (const void *buf, size_t buflen, struct Md5Ctx *md5ctx);
  // void                    mutt_md5_toascii                  (const void *digest, char *resbuf);

  struct Md5Ctx m;
  mutt_md5_init_ctx(&m);
}

void test_memory(void)
{
  // void *                  mutt_mem_calloc                   (size_t nmemb, size_t size);
  // void                    mutt_mem_free                     (void *ptr);
  // void *                  mutt_mem_malloc                   (size_t size);
  // void                    mutt_mem_realloc                  (void *ptr, size_t size);

  void *ptr = NULL;
  FREE(&ptr);
}

void test_notify(void)
{
  // void                    notify_free                       (struct Notify **ptr);
  // struct Notify *         notify_new                        (void);
  // bool                    notify_observer_add               (struct Notify *notify, enum NotifyType type, observer_t callback, void *global_data);
  // bool                    notify_observer_remove            (struct Notify *notify, observer_t callback, void *global_data);
  // void                    notify_observer_remove_all        (struct Notify *notify);
  // bool                    notify_send                       (struct Notify *notify, enum NotifyType event_type, int event_subtype, void *event_data);
  // void                    notify_set_parent                 (struct Notify *notify, struct Notify *parent);

  struct Notify *n = NULL;
  notify_free(&n);
}

void test_path(void)
{
  // bool                    mutt_path_abbr_folder             (char *buf, size_t buflen, const char *folder);
  // const char *            mutt_path_basename                (const char *f);
  // bool                    mutt_path_canon                   (char *buf, size_t buflen, const char *homedir, bool is_dir);
  // char *                  mutt_path_concat                  (char *d, const char *dir, const char *fname, size_t l);
  // char *                  mutt_path_dirname                 (const char *path);
  // char *                  mutt_path_escape                  (const char *src);
  // const char *            mutt_path_getcwd                  (struct Buffer *cwd);
  // bool                    mutt_path_parent                  (char *buf, size_t buflen);
  // bool                    mutt_path_pretty                  (char *buf, size_t buflen, const char *homedir, bool is_dir);
  // size_t                  mutt_path_realpath                (char *buf);
  // bool                    mutt_path_tidy                    (char *buf, bool is_dir);
  // bool                    mutt_path_tidy_dotdot             (char *buf);
  // bool                    mutt_path_tidy_slash              (char *buf, bool is_dir);
  // bool                    mutt_path_tilde                   (char *buf, size_t buflen, const char *homedir);
  // bool                    mutt_path_to_absolute             (char *path, const char *reference);

  mutt_path_basename("/home/mutt/file");
}

void test_pool(void)
{
  // void                    mutt_buffer_pool_free             (void);
  // struct Buffer *         mutt_buffer_pool_get              (void);
  // void                    mutt_buffer_pool_release          (struct Buffer **pbuf);

  mutt_buffer_pool_free();
}

void test_prex(void)
{
  // regmatch_t *            mutt_prex_capture                 (enum Prex which, const char *str);
  // void                    mutt_prex_free                    (void);

  mutt_prex_free();
}

void test_random(void)
{
  // uint32_t                mutt_rand32                       (void);
  // uint64_t                mutt_rand64                       (void);
  // void                    mutt_rand_base32                  (char *buf, size_t buflen);

  mutt_rand32();
}

void test_regex(void)
{
  // bool                    mutt_regex_capture                (const struct Regex *regex, const char *str, size_t nmatch, regmatch_t matches[]);
  // struct Regex *          mutt_regex_compile                (const char *str, uint16_t flags);
  // void                    mutt_regex_free                   (struct Regex **r);
  // bool                    mutt_regex_match                  (const struct Regex *regex, const char *str);
  // struct Regex *          mutt_regex_new                    (const char *str, uint32_t flags, struct Buffer *err);
  // int                     mutt_regexlist_add                (struct RegexList *rl, const char *str, uint16_t flags, struct Buffer *err);
  // void                    mutt_regexlist_free               (struct RegexList *rl);
  // bool                    mutt_regexlist_match              (struct RegexList *rl, const char *str);
  // struct RegexNode *      mutt_regexlist_new                (void);
  // int                     mutt_regexlist_remove             (struct RegexList *rl, const char *str);
  // int                     mutt_replacelist_add              (struct ReplaceList *rl, const char *pat, const char *templ, struct Buffer *err);
  // char *                  mutt_replacelist_apply            (struct ReplaceList *rl, char *buf, size_t buflen, const char *str);
  // void                    mutt_replacelist_free             (struct ReplaceList *rl);
  // bool                    mutt_replacelist_match            (struct ReplaceList *rl, char *buf, size_t buflen, const char *str);
  // struct Replace *        mutt_replacelist_new              (void);
  // int                     mutt_replacelist_remove           (struct ReplaceList *rl, const char *pat);

  struct Regex *rx = mutt_regex_compile("hel*o", 0);
  mutt_regex_free(&rx);
}

void test_signal(void)
{
  // void                    mutt_sig_allow_interrupt          (bool allow);
  // void                    mutt_sig_block                    (void);
  // void                    mutt_sig_block_system             (void);
  // void                    mutt_sig_empty_handler            (int sig);
  // void                    mutt_sig_exit_handler             (int sig);
  // void                    mutt_sig_init                     (sig_handler_t sig_fn, sig_handler_t exit_fn, sig_handler_t segv_fn);
  // void                    mutt_sig_unblock                  (void);
  // void                    mutt_sig_unblock_system           (bool restore);


  mutt_sig_unblock();
}

void test_slist(void)
{
  // struct Slist *          slist_add_list                    (struct Slist *list, const struct Slist *add);
  // struct Slist *          slist_add_string                  (struct Slist *list, const char *str);
  // bool                    slist_compare                     (const struct Slist *a, const struct Slist *b);
  // struct Slist *          slist_dup                         (const struct Slist *list);
  // struct Slist *          slist_empty                       (struct Slist **list);
  // void                    slist_free                        (struct Slist **list);
  // bool                    slist_is_member                   (const struct Slist *list, const char *str);
  // struct Slist *          slist_new                         (uint32_t flags);
  // struct Slist *          slist_parse                       (const char *str, uint32_t flags);
  // struct Slist *          slist_remove_string               (struct Slist *list, const char *str);
  // int                     slist_to_buffer                   (const struct Slist *list, struct Buffer *buf);

  struct Slist *s = NULL;
  slist_free(&s);
}

void test_string(void)
{
  // int                     mutt_istr_cmp                     (const char *a, const char *b);
  // bool                    mutt_istr_equal                   (const char *a, const char *b);
  // const char *            mutt_istr_find                    (const char *haystack, const char *needle);
  // int                     mutt_istr_remall                  (char *str, const char *target);
  // size_t                  mutt_istr_startswith              (const char *str, const char *prefix);
  // int                     mutt_istrn_cmp                    (const char *a, const char *b, size_t num);
  // bool                    mutt_istrn_equal                  (const char *a, const char *b, size_t num);
  // void                    mutt_str_adjust                   (char **ptr);
  // void                    mutt_str_append_item              (char **str, const char *item, char sep);
  // int                     mutt_str_asprintf                 (char **strp, const char *fmt, ...);
  // int                     mutt_str_atoi                     (const char *str, int *dst);
  // int                     mutt_str_atol                     (const char *str, long *dst);
  // int                     mutt_str_atos                     (const char *str, short *dst);
  // int                     mutt_str_atoui                    (const char *str, unsigned int *dst);
  // int                     mutt_str_atoul                    (const char *str, unsigned long *dst);
  // int                     mutt_str_atoull                   (const char *str, unsigned long long *dst);
  // char *                  mutt_str_cat                      (char *buf, size_t buflen, const char *s);
  // int                     mutt_str_cmp                      (const char *a, const char *b);
  // int                     mutt_str_coll                     (const char *a, const char *b);
  // size_t                  mutt_str_copy                     (char *dest, const char *src, size_t dsize);
  // void                    mutt_str_dequote_comment          (char *str);
  // char *                  mutt_str_dup                      (const char *str);
  // bool                    mutt_str_equal                    (const char *a, const char *b);
  // const char *            mutt_str_find_word                (const char *src);
  // const char *            mutt_str_getenv                   (const char *name);
  // bool                    mutt_str_inline_replace           (char *buf, size_t buflen, size_t xlen, const char *rstr);
  // bool                    mutt_str_is_ascii                 (const char *str, size_t len);
  // bool                    mutt_str_is_email_wsp             (char c);
  // size_t                  mutt_str_len                      (const char *a);
  // char *                  mutt_str_lower                    (char *str);
  // size_t                  mutt_str_lws_len                  (const char *s, size_t n);
  // size_t                  mutt_str_lws_rlen                 (const char *s, size_t n);
  // const char *            mutt_str_next_word                (const char *s);
  // void                    mutt_str_remove_trailing_ws       (char *s);
  // char *                  mutt_str_replace                  (char **p, const char *s);
  // char *                  mutt_str_skip_email_wsp           (const char *s);
  // char *                  mutt_str_skip_whitespace          (const char *p);
  // size_t                  mutt_str_startswith               (const char *str, const char *prefix);
  // const char *            mutt_str_sysexit                  (int err_num);
  // char *                  mutt_strn_cat                     (char *d, size_t l, const char *s, size_t sl);
  // char *                  mutt_strn_copy                    (char *dest, const char *src, size_t len, size_t dsize);
  // char *                  mutt_strn_dup                     (const char *begin, size_t len);
  // bool                    mutt_strn_equal                   (const char *a, const char *b, size_t num);
  // const char *            mutt_strn_rfind                   (const char *haystack, size_t haystack_length, const char *needle);

  mutt_str_len("hello");
}

void test_exit(void)
{
  // void                    mutt_exit                         (int code);

  mutt_exit(42);
}

int main()
{
  test_base64();
  test_buffer();
  test_charset();
  test_date();
  test_envlist();
  test_file();
  test_filter();
  test_hash();
  test_list();
  test_logging();
  test_mapping();
  test_mbyte();
  test_md5();
  test_memory();
  test_notify();
  test_path();
  test_pool();
  test_prex();
  test_random();
  test_regex();
  test_signal();
  test_slist();
  test_string();
  test_exit();

  return 0;
}
