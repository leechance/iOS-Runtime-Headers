/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification {
    NSString *_finePrintFormat;
    NSArray *_finePrintLinks;
    ICQLink *_learnMoreLink;
    NSString *_message;
    ICQLink *_purchaseLink;
    NSDictionary *_serverDict;
    NSArray *_services;
    NSString *_title;
}

@property (nonatomic, retain) NSString *finePrintFormat;
@property (nonatomic, retain) NSArray *finePrintLinks;
@property (nonatomic, retain) ICQLink *learnMoreLink;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) ICQLink *purchaseLink;
@property (nonatomic, readonly) NSDictionary *serverDict;
@property (nonatomic, retain) NSArray *services;
@property (nonatomic, retain) NSString *title;

+ (id)upgradeOfferPageSpecificationSampleForLevel:(int)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)finePrintFormat;
- (id)finePrintLinks;
- (id)initWithServerDictionary:(id)arg1;
- (id)learnMoreLink;
- (id)message;
- (id)pageIdentifier;
- (id)purchaseLink;
- (id)serverDict;
- (id)services;
- (void)setFinePrintFormat:(id)arg1;
- (void)setFinePrintLinks:(id)arg1;
- (void)setLearnMoreLink:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPurchaseLink:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
