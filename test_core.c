#include "config.h"
#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "mutt/lib.h"
#include "core/lib.h"

void nm_edata_free(void **ptr)
{
}

void test_neomutt()
{
  // struct NeoMutt *NeoMutt;

  // bool                    neomutt_account_add               (struct NeoMutt *n, struct Account *a);
  // bool                    neomutt_account_remove            (struct NeoMutt *n, struct Account *a);
  // void                    neomutt_free                      (struct NeoMutt **ptr);
  // void                    neomutt_mailboxlist_clear         (struct MailboxList *ml);
  // size_t                  neomutt_mailboxlist_get_all       (struct MailboxList *head, struct NeoMutt *n, enum MailboxType type);
  // struct NeoMutt *        neomutt_new                       (struct ConfigSet *cs);

  neomutt_free(NULL);
}

void test_account()
{
  // void                    account_free                      (struct Account **ptr);
  // bool                    account_mailbox_add               (struct Account *a, struct Mailbox *m);
  // bool                    account_mailbox_remove            (struct Account *a, struct Mailbox *m);
  // struct Account *        account_new                       (const char *name, struct ConfigSubset *sub);

  account_free(NULL);
}

void test_mailbox()
{
  // void                    mailbox_changed                   (struct Mailbox *m, enum NotifyMailbox action);
  // struct Mailbox *        mailbox_find                      (const char *path);
  // struct Mailbox *        mailbox_find_name                 (const char *name);
  // void                    mailbox_free                      (struct Mailbox **ptr);
  // void                    mailbox_gc_add                    (struct Email *e);
  // void                    mailbox_gc_run                    (void);
  // int                     mailbox_gen                       (void);
  // struct Mailbox *        mailbox_new                       (void);
  // bool                    mailbox_set_subset                (struct Mailbox *m, struct ConfigSubset *sub);
  // void                    mailbox_size_add                  (struct Mailbox *m, const struct Email *e);
  // void                    mailbox_size_sub                  (struct Mailbox *m, const struct Email *e);
  // void                    mailbox_update                    (struct Mailbox *m);

  mailbox_free(NULL);
}

int main()
{
  test_neomutt();
  test_account();
  test_mailbox();

  return 0;
}
