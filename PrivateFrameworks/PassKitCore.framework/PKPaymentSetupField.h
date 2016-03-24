/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupField : NSObject {
    <NSObject><NSCopying> *_currentValue;
    BOOL _currentValueFromCameraCapture;
    NSString *_defaultValue;
    NSString *_displayFormat;
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSString *_localizedPlaceholder;
    NSDictionary *_rawConfigurationDictionary;
    BOOL _requiresSecureSubmission;
    NSString *_submissionDestination;
    NSString *_submissionKey;
}

@property (getter=isBuiltIn, nonatomic, readonly) BOOL builtIn;
@property (nonatomic, readonly, copy) NSString *compactLocalizedDisplayName;
@property (nonatomic, copy) <NSObject><NSCopying> *currentValue;
@property (getter=isCurrentValueFromCameraCapture, nonatomic) BOOL currentValueFromCameraCapture;
@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *displayFormat;
@property (nonatomic, readonly) unsigned int fieldType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *localizedPlaceholder;
@property (nonatomic, readonly, copy) NSDictionary *rawConfigurationDictionary;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (nonatomic, copy) NSString *submissionDestination;
@property (nonatomic, copy) NSString *submissionKey;

+ (Class)classForIdentifier:(id)arg1 type:(unsigned int)arg2;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned int)arg2;
+ (id)sampleCustomPaymentSetupFields;

- (void)_setLocalizedDisplayName:(id)arg1;
- (id)compactLocalizedDisplayName;
- (id)currentValue;
- (id)dateFieldObject;
- (void)dealloc;
- (id)defaultValue;
- (id)displayFormat;
- (id)displayString;
- (unsigned int)fieldType;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned int)arg2;
- (BOOL)isBuiltIn;
- (BOOL)isCurrentValueFromCameraCapture;
- (BOOL)isFieldTypeDate;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypeText;
- (id)labelFieldObject;
- (id)localizedDisplayName;
- (id)localizedPlaceholder;
- (void)noteCurrentValueChanged;
- (id)rawConfigurationDictionary;
- (BOOL)requiresSecureSubmission;
- (void)setCurrentValue:(id)arg1;
- (void)setCurrentValueFromCameraCapture:(BOOL)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDisplayFormat:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (void)setRequiresSecureSubmission:(BOOL)arg1;
- (void)setSubmissionDestination:(id)arg1;
- (void)setSubmissionKey:(id)arg1;
- (id)submissionDestination;
- (id)submissionKey;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)textFieldObject;
- (void)updateWithConfiguration:(id)arg1;

@end
