/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    NSString *_certificateUUID;
    NSString *_emailAddress;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_hostname;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSString *_password;
    BOOL _syncDefaultFoldersOnly;
    NSNumber *_syncDefaultFoldersOnlyNum;
    NSNumber *_useSSL;
    NSString *_username;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountPersistentUUID;
@property (nonatomic, retain) NSData *certificatePersistentID;
@property (nonatomic, readonly, retain) NSString *certificateUUID;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, readonly, retain) NSData *embeddedCertificate;
@property (nonatomic, readonly, retain) NSString *embeddedCertificateName;
@property (nonatomic, copy) NSString *embeddedCertificatePassword;
@property (nonatomic, readonly) BOOL hasCertificate;
@property (nonatomic, readonly, retain) NSString *hostname;
@property (nonatomic, readonly, retain) NSNumber *mailNumberOfPastDaysToSync;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) BOOL syncDefaultFoldersOnly;
@property (nonatomic, readonly) NSNumber *syncDefaultFoldersOnlyNum;
@property (nonatomic, retain) NSNumber *useSSL;
@property (nonatomic, copy) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)certificatePersistentID;
- (id)certificateUUID;
- (BOOL)containsSensitiveUserInformation;
- (id)description;
- (id)emailAddress;
- (id)embeddedCertificate;
- (id)embeddedCertificateName;
- (id)embeddedCertificatePassword;
- (BOOL)hasCertificate;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailNumberOfPastDaysToSync;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setCertificatePersistentID:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSyncDefaultFoldersOnly:(BOOL)arg1;
- (void)setUseSSL:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (BOOL)syncDefaultFoldersOnly;
- (id)syncDefaultFoldersOnlyNum;
- (id)title;
- (id)useSSL;
- (id)username;

@end
