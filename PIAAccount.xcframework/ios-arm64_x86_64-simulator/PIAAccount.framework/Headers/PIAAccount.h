#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PIAAAccountInformation, PIAAAccountRequestError, PIAAClientStatusInformation, PIAADedicatedIPInformationResponseDedicatedIPInformation, PIAAFeatureFlagsInformation, PIAAInvitesDetailsInformation, PIAAMessageInformation, PIAARedeemInformation, PIAAAccountBuilder<T>, PIAAPlatform, PIAAAccountEndpoint, PIAAAmazonSignupInformation, PIAASignUpInformation, PIAAAmazonSubscriptionsInformation, PIAAAndroidSignupInformation, PIAAAndroidSubscriptionsInformation, PIAAIOSPaymentInformation, PIAAIOSSignupInformation, PIAAIOSSubscriptionInformation, PIAAKotlinEnumCompanion, PIAAKotlinEnum<E>, PIAAKotlinArray<T>, PIAAAccountUtils, PIAANetworkUtils, PIAADedicatedIPRequestCompanion, PIAAAmazonSignupInformationCompanion, PIAAAndroidSignupInformationReceipt, PIAAAndroidSignupInformationCompanion, PIAAAndroidSignupInformationReceiptCompanion, PIAAIOSPaymentInformationCompanion, PIAAIOSSignupInformationCompanion, PIAAAccountInformationCompanion, PIAAAmazonSubscriptionsInformationAvailableProduct, PIAAAmazonSubscriptionsInformationCompanion, PIAAAmazonSubscriptionsInformationAvailableProductCompanion, PIAAAndroidSubscriptionsInformationAvailableProduct, PIAAAndroidSubscriptionsInformationCompanion, PIAAAndroidSubscriptionsInformationAvailableProductCompanion, PIAAClientStatusInformationCompanion, PIAADedicatedIPInformationResponseCompanion, PIAADedicatedIPInformationResponse, PIAADedicatedIPInformationResponseStatus, PIAADedicatedIPInformationResponseDedicatedIPInformationCompanion, PIAAFeatureFlagsInformationCompanion, PIAAIOSSubscriptionInformationAvailableProduct, PIAAIOSSubscriptionInformationReceipt, PIAAIOSSubscriptionInformationCompanion, PIAAIOSSubscriptionInformationAvailableProductCompanion, PIAAIOSSubscriptionInformationReceiptCompanion, PIAAInvitesDetailsInformationInvite, PIAAInvitesDetailsInformationCompanion, PIAAInvitesDetailsInformationInviteCompanion, PIAAMessageInformationLink, PIAAMessageInformationCompanion, PIAAMessageInformationLinkAction, PIAAMessageInformationLinkCompanion, PIAAMessageInformationLinkActionCompanion, PIAARedeemInformationCompanion, PIAASignUpInformationCompanion, PIAAKotlinx_serialization_coreSerializersModule, PIAAKotlinx_serialization_coreSerialKind, PIAAKotlinNothing;

@protocol PIAAIAccountEndpointProvider, PIAAAccountAPI, PIAAKotlinComparable, PIAAKotlinx_serialization_coreKSerializer, PIAAKotlinIterator, PIAAKotlinx_serialization_coreEncoder, PIAAKotlinx_serialization_coreSerialDescriptor, PIAAKotlinx_serialization_coreSerializationStrategy, PIAAKotlinx_serialization_coreDecoder, PIAAKotlinx_serialization_coreDeserializationStrategy, PIAAKotlinx_serialization_coreCompositeEncoder, PIAAKotlinAnnotation, PIAAKotlinx_serialization_coreCompositeDecoder, PIAAKotlinx_serialization_coreSerializersModuleCollector, PIAAKotlinKClass, PIAAKotlinKDeclarationContainer, PIAAKotlinKAnnotatedElement, PIAAKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PIAABase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PIAABase (PIAABaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PIAAMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PIAAMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPIAAKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PIAANumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface PIAAByte : PIAANumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PIAAUByte : PIAANumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PIAAShort : PIAANumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PIAAUShort : PIAANumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PIAAInt : PIAANumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PIAAUInt : PIAANumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PIAALong : PIAANumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PIAAULong : PIAANumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PIAAFloat : PIAANumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PIAADouble : PIAANumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PIAABoolean : PIAANumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("AccountAPI")))
@protocol PIAAAccountAPI
@required
- (void)accountDetailsCallback:(void (^)(PIAAAccountInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("accountDetails(callback:)")));
- (NSString * _Nullable)apiToken __attribute__((swift_name("apiToken()")));
- (void)clientStatusCallback:(void (^)(PIAAClientStatusInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("clientStatus(callback:)")));
- (void)dedicatedIPsIpTokens:(NSArray<NSString *> *)ipTokens callback:(void (^)(NSArray<PIAADedicatedIPInformationResponseDedicatedIPInformation *> *, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("dedicatedIPs(ipTokens:callback:)")));
- (void)deleteAccountCallback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("deleteAccount(callback:)")));
- (void)featureFlagsCallback:(void (^)(PIAAFeatureFlagsInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("featureFlags(callback:)")));
- (void)invitesDetailsCallback:(void (^)(PIAAInvitesDetailsInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("invitesDetails(callback:)")));
- (void)loginLinkEmail:(NSString *)email callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("loginLink(email:callback:)")));
- (void)loginWithCredentialsUsername:(NSString *)username password:(NSString *)password callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("loginWithCredentials(username:password:callback:)")));
- (void)logoutCallback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("logout(callback:)")));
- (void)messageAppVersion:(NSString *)appVersion callback:(void (^)(PIAAMessageInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("message(appVersion:callback:)")));
- (void)migrateApiTokenApiToken:(NSString *)apiToken callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("migrateApiToken(apiToken:callback:)")));
- (void)redeemEmail:(NSString *)email code:(NSString *)code callback:(void (^)(PIAARedeemInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("redeem(email:code:callback:)")));
- (void)renewDedicatedIPIpToken:(NSString *)ipToken callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("renewDedicatedIP(ipToken:callback:)")));
- (void)sendInviteRecipientEmail:(NSString *)recipientEmail recipientName:(NSString *)recipientName callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("sendInvite(recipientEmail:recipientName:callback:)")));
- (void)setEmailEmail:(NSString *)email resetPassword:(BOOL)resetPassword callback:(void (^)(NSString * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("setEmail(email:resetPassword:callback:)")));
- (NSString * _Nullable)vpnToken __attribute__((swift_name("vpnToken()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountBuilder")))
@interface PIAAAccountBuilder<T> : PIAABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)build __attribute__((swift_name("build()")));
- (PIAAAccountBuilder<T> *)setCertificateCertificate:(NSString * _Nullable)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (PIAAAccountBuilder<T> *)setEndpointProviderEndpointsProvider:(id<PIAAIAccountEndpointProvider>)endpointsProvider __attribute__((swift_name("setEndpointProvider(endpointsProvider:)")));
- (PIAAAccountBuilder<T> *)setPlatformPlatform:(PIAAPlatform *)platform __attribute__((swift_name("setPlatform(platform:)")));
- (PIAAAccountBuilder<T> *)setUserAgentValueUserAgentValue:(NSString *)userAgentValue __attribute__((swift_name("setUserAgentValue(userAgentValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountEndpoint")))
@interface PIAAAccountEndpoint : PIAABase
- (instancetype)initWithIpOrRootDomain:(NSString *)ipOrRootDomain isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(ipOrRootDomain:isProxy:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (PIAAAccountEndpoint *)doCopyIpOrRootDomain:(NSString *)ipOrRootDomain isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(ipOrRootDomain:isProxy:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *ipOrRootDomain __attribute__((swift_name("ipOrRootDomain")));
@property (readonly) BOOL isProxy __attribute__((swift_name("isProxy")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRequestError")))
@interface PIAAAccountRequestError : PIAABase
- (instancetype)initWithCode:(int32_t)code message:(NSString * _Nullable)message retryAfterSeconds:(int64_t)retryAfterSeconds __attribute__((swift_name("init(code:message:retryAfterSeconds:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (PIAAAccountRequestError *)doCopyCode:(int32_t)code message:(NSString * _Nullable)message retryAfterSeconds:(int64_t)retryAfterSeconds __attribute__((swift_name("doCopy(code:message:retryAfterSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) int64_t retryAfterSeconds __attribute__((swift_name("retryAfterSeconds")));
@end;

__attribute__((swift_name("AndroidAccountAPI")))
@protocol PIAAAndroidAccountAPI <PIAAAccountAPI>
@required
- (void)amazonLoginWithReceiptReceiptId:(NSString *)receiptId userId:(NSString *)userId store:(NSString *)store callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("amazonLoginWithReceipt(receiptId:userId:store:callback:)")));
- (void)amazonSignUpInformation:(PIAAAmazonSignupInformation *)information callback:(void (^)(PIAASignUpInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("amazonSignUp(information:callback:)")));
- (void)amazonSubscriptionsCallback:(void (^)(PIAAAmazonSubscriptionsInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("amazonSubscriptions(callback:)")));
- (void)loginWithReceiptStore:(NSString *)store token:(NSString *)token productId:(NSString *)productId applicationPackage:(NSString *)applicationPackage callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("loginWithReceipt(store:token:productId:applicationPackage:callback:)")));
- (void)signUpInformation:(PIAAAndroidSignupInformation *)information callback:(void (^)(PIAASignUpInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("signUp(information:callback:)")));
- (void)subscriptionsCallback:(void (^)(PIAAAndroidSubscriptionsInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("subscriptions(callback:)")));
@end;

__attribute__((swift_name("IAccountEndpointProvider")))
@protocol PIAAIAccountEndpointProvider
@required
- (NSArray<PIAAAccountEndpoint *> *)accountEndpoints __attribute__((swift_name("accountEndpoints()")));
@end;

__attribute__((swift_name("IOSAccountAPI")))
@protocol PIAAIOSAccountAPI <PIAAAccountAPI>
@required
- (void)loginWithReceiptReceiptBase64:(NSString *)receiptBase64 callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("loginWithReceipt(receiptBase64:callback:)")));
- (void)paymentUsername:(NSString *)username password:(NSString *)password information:(PIAAIOSPaymentInformation *)information callback:(void (^)(NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("payment(username:password:information:callback:)")));
- (void)setEmailUsername:(NSString *)username password:(NSString *)password email:(NSString *)email resetPassword:(BOOL)resetPassword callback:(void (^)(NSString * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("setEmail(username:password:email:resetPassword:callback:)")));
- (void)signUpInformation:(PIAAIOSSignupInformation *)information callback_:(void (^)(PIAASignUpInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("signUp(information:callback_:)")));
- (void)subscriptionsReceipt:(NSString * _Nullable)receipt callback:(void (^)(PIAAIOSSubscriptionInformation * _Nullable, NSArray<PIAAAccountRequestError *> *))callback __attribute__((swift_name("subscriptions(receipt:callback:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PIAAKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PIAAKotlinEnum<E> : PIAABase <PIAAKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface PIAAPlatform : PIAAKotlinEnum<PIAAPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIAAPlatform *ios __attribute__((swift_name("ios")));
@property (class, readonly) PIAAPlatform *android __attribute__((swift_name("android")));
+ (PIAAKotlinArray<PIAAPlatform *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountUtils")))
@interface PIAAAccountUtils : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accountUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAccountUtils *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkUtils")))
@interface PIAANetworkUtils : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAANetworkUtils *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPRequest")))
@interface PIAADedicatedIPRequest : PIAABase
- (instancetype)initWithTokens:(NSArray<NSString *> *)tokens __attribute__((swift_name("init(tokens:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAADedicatedIPRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *tokens __attribute__((swift_name("tokens")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPRequest.Companion")))
@interface PIAADedicatedIPRequestCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAADedicatedIPRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSignupInformation")))
@interface PIAAAmazonSignupInformation : PIAABase
- (instancetype)initWithUserId:(NSString *)userId receiptId:(NSString *)receiptId email:(NSString *)email __attribute__((swift_name("init(userId:receiptId:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAmazonSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (PIAAAmazonSignupInformation *)doCopyUserId:(NSString *)userId receiptId:(NSString *)receiptId email:(NSString *)email __attribute__((swift_name("doCopy(userId:receiptId:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *receiptId __attribute__((swift_name("receiptId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSignupInformation.Companion")))
@interface PIAAAmazonSignupInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAmazonSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation")))
@interface PIAAAndroidSignupInformation : PIAABase
- (instancetype)initWithStore:(NSString *)store receipt:(PIAAAndroidSignupInformationReceipt *)receipt marketing:(NSString * _Nullable)marketing __attribute__((swift_name("init(store:receipt:marketing:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAndroidSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (PIAAAndroidSignupInformationReceipt *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (PIAAAndroidSignupInformation *)doCopyStore:(NSString *)store receipt:(PIAAAndroidSignupInformationReceipt *)receipt marketing:(NSString * _Nullable)marketing __attribute__((swift_name("doCopy(store:receipt:marketing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable marketing __attribute__((swift_name("marketing")));
@property (readonly) PIAAAndroidSignupInformationReceipt *receipt __attribute__((swift_name("receipt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.Companion")))
@interface PIAAAndroidSignupInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAndroidSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.Receipt")))
@interface PIAAAndroidSignupInformationReceipt : PIAABase
- (instancetype)initWithOrderId:(NSString *)orderId token:(NSString *)token sku:(NSString *)sku __attribute__((swift_name("init(orderId:token:sku:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAndroidSignupInformationReceiptCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (PIAAAndroidSignupInformationReceipt *)doCopyOrderId:(NSString *)orderId token:(NSString *)token sku:(NSString *)sku __attribute__((swift_name("doCopy(orderId:token:sku:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));
@property (readonly) NSString *sku __attribute__((swift_name("sku")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.ReceiptCompanion")))
@interface PIAAAndroidSignupInformationReceiptCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAndroidSignupInformationReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPaymentInformation")))
@interface PIAAIOSPaymentInformation : PIAABase
- (instancetype)initWithStore:(NSString *)store receipt:(NSString *)receipt marketing:(NSString *)marketing debug:(NSString *)debug __attribute__((swift_name("init(store:receipt:marketing:debug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAIOSPaymentInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PIAAIOSPaymentInformation *)doCopyStore:(NSString *)store receipt:(NSString *)receipt marketing:(NSString *)marketing debug:(NSString *)debug __attribute__((swift_name("doCopy(store:receipt:marketing:debug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *debug __attribute__((swift_name("debug")));
@property (readonly) NSString *marketing __attribute__((swift_name("marketing")));
@property (readonly) NSString *receipt __attribute__((swift_name("receipt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPaymentInformation.Companion")))
@interface PIAAIOSPaymentInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAIOSPaymentInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSignupInformation")))
@interface PIAAIOSSignupInformation : PIAABase
- (instancetype)initWithStore:(NSString *)store receipt:(NSString *)receipt email:(NSString *)email marketing:(NSString * _Nullable)marketing debug:(NSString * _Nullable)debug __attribute__((swift_name("init(store:receipt:email:marketing:debug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAIOSSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (PIAAIOSSignupInformation *)doCopyStore:(NSString *)store receipt:(NSString *)receipt email:(NSString *)email marketing:(NSString * _Nullable)marketing debug:(NSString * _Nullable)debug __attribute__((swift_name("doCopy(store:receipt:email:marketing:debug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable debug __attribute__((swift_name("debug")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable marketing __attribute__((swift_name("marketing")));
@property (readonly) NSString *receipt __attribute__((swift_name("receipt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSignupInformation.Companion")))
@interface PIAAIOSSignupInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAIOSSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInformation")))
@interface PIAAAccountInformation : PIAABase
- (instancetype)initWithActive:(BOOL)active canInvite:(BOOL)canInvite canceled:(BOOL)canceled daysRemaining:(int32_t)daysRemaining email:(NSString *)email expirationTime:(int32_t)expirationTime expireAlert:(BOOL)expireAlert expired:(BOOL)expired needsPayment:(BOOL)needsPayment plan:(NSString *)plan productId:(NSString * _Nullable)productId recurring:(BOOL)recurring renewUrl:(NSString *)renewUrl renewable:(BOOL)renewable username:(NSString *)username __attribute__((swift_name("init(active:canInvite:canceled:daysRemaining:email:expirationTime:expireAlert:expired:needsPayment:plan:productId:recurring:renewUrl:renewable:username:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAccountInformationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (BOOL)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (PIAAAccountInformation *)doCopyActive:(BOOL)active canInvite:(BOOL)canInvite canceled:(BOOL)canceled daysRemaining:(int32_t)daysRemaining email:(NSString *)email expirationTime:(int32_t)expirationTime expireAlert:(BOOL)expireAlert expired:(BOOL)expired needsPayment:(BOOL)needsPayment plan:(NSString *)plan productId:(NSString * _Nullable)productId recurring:(BOOL)recurring renewUrl:(NSString *)renewUrl renewable:(BOOL)renewable username:(NSString *)username __attribute__((swift_name("doCopy(active:canInvite:canceled:daysRemaining:email:expirationTime:expireAlert:expired:needsPayment:plan:productId:recurring:renewUrl:renewable:username:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@property (readonly) BOOL canInvite __attribute__((swift_name("canInvite")));
@property (readonly) BOOL canceled __attribute__((swift_name("canceled")));
@property (readonly) int32_t daysRemaining __attribute__((swift_name("daysRemaining")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) int32_t expirationTime __attribute__((swift_name("expirationTime")));
@property (readonly) BOOL expireAlert __attribute__((swift_name("expireAlert")));
@property (readonly) BOOL expired __attribute__((swift_name("expired")));
@property (readonly) BOOL needsPayment __attribute__((swift_name("needsPayment")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) NSString * _Nullable productId __attribute__((swift_name("productId")));
@property (readonly) BOOL recurring __attribute__((swift_name("recurring")));
@property (readonly) NSString *renewUrl __attribute__((swift_name("renewUrl")));
@property (readonly) BOOL renewable __attribute__((swift_name("renewable")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInformation.Companion")))
@interface PIAAAccountInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAccountInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation")))
@interface PIAAAmazonSubscriptionsInformation : PIAABase
- (instancetype)initWithAvailableProducts:(NSArray<PIAAAmazonSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("init(availableProducts:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAmazonSubscriptionsInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PIAAAmazonSubscriptionsInformationAvailableProduct *> *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PIAAAmazonSubscriptionsInformation *)doCopyAvailableProducts:(NSArray<PIAAAmazonSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PIAAAmazonSubscriptionsInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.AvailableProduct")))
@interface PIAAAmazonSubscriptionsInformationAvailableProduct : PIAABase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(double)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAmazonSubscriptionsInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (PIAAAmazonSubscriptionsInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(double)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) double price __attribute__((swift_name("price")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.AvailableProductCompanion")))
@interface PIAAAmazonSubscriptionsInformationAvailableProductCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAmazonSubscriptionsInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.Companion")))
@interface PIAAAmazonSubscriptionsInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAmazonSubscriptionsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation")))
@interface PIAAAndroidSubscriptionsInformation : PIAABase
- (instancetype)initWithAvailableProducts:(NSArray<PIAAAndroidSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("init(availableProducts:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAndroidSubscriptionsInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PIAAAndroidSubscriptionsInformationAvailableProduct *> *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PIAAAndroidSubscriptionsInformation *)doCopyAvailableProducts:(NSArray<PIAAAndroidSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PIAAAndroidSubscriptionsInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.AvailableProduct")))
@interface PIAAAndroidSubscriptionsInformationAvailableProduct : PIAABase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAAndroidSubscriptionsInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PIAAAndroidSubscriptionsInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.AvailableProductCompanion")))
@interface PIAAAndroidSubscriptionsInformationAvailableProductCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAndroidSubscriptionsInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.Companion")))
@interface PIAAAndroidSubscriptionsInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAAndroidSubscriptionsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatusInformation")))
@interface PIAAClientStatusInformation : PIAABase
- (instancetype)initWithConnected:(BOOL)connected ip:(NSString *)ip __attribute__((swift_name("init(connected:ip:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAClientStatusInformationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PIAAClientStatusInformation *)doCopyConnected:(BOOL)connected ip:(NSString *)ip __attribute__((swift_name("doCopy(connected:ip:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL connected __attribute__((swift_name("connected")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatusInformation.Companion")))
@interface PIAAClientStatusInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAClientStatusInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse")))
@interface PIAADedicatedIPInformationResponse : PIAABase
- (instancetype)initWithResult:(NSArray<PIAADedicatedIPInformationResponseDedicatedIPInformation *> *)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAADedicatedIPInformationResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PIAADedicatedIPInformationResponseDedicatedIPInformation *> *)component1 __attribute__((swift_name("component1()")));
- (PIAADedicatedIPInformationResponse *)doCopyResult:(NSArray<PIAADedicatedIPInformationResponseDedicatedIPInformation *> *)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PIAADedicatedIPInformationResponseDedicatedIPInformation *> *result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.Companion")))
@interface PIAADedicatedIPInformationResponseCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAADedicatedIPInformationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.DedicatedIPInformation")))
@interface PIAADedicatedIPInformationResponseDedicatedIPInformation : PIAABase
- (instancetype)initWithId:(NSString * _Nullable)id ip:(NSString * _Nullable)ip cn:(NSString * _Nullable)cn groups:(NSArray<NSString *> * _Nullable)groups dip_expire:(PIAALong * _Nullable)dip_expire dipToken:(NSString *)dipToken status:(PIAADedicatedIPInformationResponseStatus *)status __attribute__((swift_name("init(id:ip:cn:groups:dip_expire:dipToken:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAADedicatedIPInformationResponseDedicatedIPInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (PIAALong * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (PIAADedicatedIPInformationResponseStatus *)component7 __attribute__((swift_name("component7()")));
- (PIAADedicatedIPInformationResponseDedicatedIPInformation *)doCopyId:(NSString * _Nullable)id ip:(NSString * _Nullable)ip cn:(NSString * _Nullable)cn groups:(NSArray<NSString *> * _Nullable)groups dip_expire:(PIAALong * _Nullable)dip_expire dipToken:(NSString *)dipToken status:(PIAADedicatedIPInformationResponseStatus *)status __attribute__((swift_name("doCopy(id:ip:cn:groups:dip_expire:dipToken:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cn __attribute__((swift_name("cn")));
@property (readonly) NSString *dipToken __attribute__((swift_name("dipToken")));
@property (readonly) PIAALong * _Nullable dip_expire __attribute__((swift_name("dip_expire")));
@property (readonly) NSArray<NSString *> * _Nullable groups __attribute__((swift_name("groups")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable ip __attribute__((swift_name("ip")));
@property (readonly) PIAADedicatedIPInformationResponseStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.DedicatedIPInformationCompanion")))
@interface PIAADedicatedIPInformationResponseDedicatedIPInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAADedicatedIPInformationResponseDedicatedIPInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.Status")))
@interface PIAADedicatedIPInformationResponseStatus : PIAAKotlinEnum<PIAADedicatedIPInformationResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIAADedicatedIPInformationResponseStatus *active __attribute__((swift_name("active")));
@property (class, readonly) PIAADedicatedIPInformationResponseStatus *expired __attribute__((swift_name("expired")));
@property (class, readonly) PIAADedicatedIPInformationResponseStatus *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) PIAADedicatedIPInformationResponseStatus *error __attribute__((swift_name("error")));
+ (PIAAKotlinArray<PIAADedicatedIPInformationResponseStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureFlagsInformation")))
@interface PIAAFeatureFlagsInformation : PIAABase
- (instancetype)initWithFlags:(NSArray<NSString *> *)flags latestVersionPiax:(NSArray<NSString *> *)latestVersionPiax __attribute__((swift_name("init(flags:latestVersionPiax:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAFeatureFlagsInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (PIAAFeatureFlagsInformation *)doCopyFlags:(NSArray<NSString *> *)flags latestVersionPiax:(NSArray<NSString *> *)latestVersionPiax __attribute__((swift_name("doCopy(flags:latestVersionPiax:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *flags __attribute__((swift_name("flags")));
@property (readonly) NSArray<NSString *> *latestVersionPiax __attribute__((swift_name("latestVersionPiax")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureFlagsInformation.Companion")))
@interface PIAAFeatureFlagsInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAFeatureFlagsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation")))
@interface PIAAIOSSubscriptionInformation : PIAABase
- (instancetype)initWithAvailableProducts:(NSArray<PIAAIOSSubscriptionInformationAvailableProduct *> *)availableProducts eligibleForTrial:(BOOL)eligibleForTrial receipt:(PIAAIOSSubscriptionInformationReceipt *)receipt status:(NSString *)status __attribute__((swift_name("init(availableProducts:eligibleForTrial:receipt:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAIOSSubscriptionInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PIAAIOSSubscriptionInformationAvailableProduct *> *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (PIAAIOSSubscriptionInformationReceipt *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PIAAIOSSubscriptionInformation *)doCopyAvailableProducts:(NSArray<PIAAIOSSubscriptionInformationAvailableProduct *> *)availableProducts eligibleForTrial:(BOOL)eligibleForTrial receipt:(PIAAIOSSubscriptionInformationReceipt *)receipt status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:eligibleForTrial:receipt:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PIAAIOSSubscriptionInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) BOOL eligibleForTrial __attribute__((swift_name("eligibleForTrial")));
@property (readonly) PIAAIOSSubscriptionInformationReceipt *receipt __attribute__((swift_name("receipt")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.AvailableProduct")))
@interface PIAAIOSSubscriptionInformationAvailableProduct : PIAABase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAIOSSubscriptionInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PIAAIOSSubscriptionInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.AvailableProductCompanion")))
@interface PIAAIOSSubscriptionInformationAvailableProductCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAIOSSubscriptionInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.Companion")))
@interface PIAAIOSSubscriptionInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAIOSSubscriptionInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.Receipt")))
@interface PIAAIOSSubscriptionInformationReceipt : PIAABase
- (instancetype)initWithEligibleForTrial:(BOOL)eligibleForTrial __attribute__((swift_name("init(eligibleForTrial:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAIOSSubscriptionInformationReceiptCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (PIAAIOSSubscriptionInformationReceipt *)doCopyEligibleForTrial:(BOOL)eligibleForTrial __attribute__((swift_name("doCopy(eligibleForTrial:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL eligibleForTrial __attribute__((swift_name("eligibleForTrial")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.ReceiptCompanion")))
@interface PIAAIOSSubscriptionInformationReceiptCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAIOSSubscriptionInformationReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation")))
@interface PIAAInvitesDetailsInformation : PIAABase
- (instancetype)initWithInvites:(NSArray<PIAAInvitesDetailsInformationInvite *> *)invites totalFreeDaysGiven:(int32_t)totalFreeDaysGiven totalInvitesRewarded:(int32_t)totalInvitesRewarded totalInvitesSent:(int32_t)totalInvitesSent uniqueReferralLink:(NSString *)uniqueReferralLink __attribute__((swift_name("init(invites:totalFreeDaysGiven:totalInvitesRewarded:totalInvitesSent:uniqueReferralLink:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAInvitesDetailsInformationCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PIAAInvitesDetailsInformationInvite *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (PIAAInvitesDetailsInformation *)doCopyInvites:(NSArray<PIAAInvitesDetailsInformationInvite *> *)invites totalFreeDaysGiven:(int32_t)totalFreeDaysGiven totalInvitesRewarded:(int32_t)totalInvitesRewarded totalInvitesSent:(int32_t)totalInvitesSent uniqueReferralLink:(NSString *)uniqueReferralLink __attribute__((swift_name("doCopy(invites:totalFreeDaysGiven:totalInvitesRewarded:totalInvitesSent:uniqueReferralLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PIAAInvitesDetailsInformationInvite *> *invites __attribute__((swift_name("invites")));
@property (readonly) int32_t totalFreeDaysGiven __attribute__((swift_name("totalFreeDaysGiven")));
@property (readonly) int32_t totalInvitesRewarded __attribute__((swift_name("totalInvitesRewarded")));
@property (readonly) int32_t totalInvitesSent __attribute__((swift_name("totalInvitesSent")));
@property (readonly) NSString *uniqueReferralLink __attribute__((swift_name("uniqueReferralLink")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.Companion")))
@interface PIAAInvitesDetailsInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAInvitesDetailsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.Invite")))
@interface PIAAInvitesDetailsInformationInvite : PIAABase
- (instancetype)initWithAccepted:(BOOL)accepted gracePeriodRemaining:(NSString *)gracePeriodRemaining obfuscatedEmail:(NSString *)obfuscatedEmail rewarded:(BOOL)rewarded __attribute__((swift_name("init(accepted:gracePeriodRemaining:obfuscatedEmail:rewarded:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAInvitesDetailsInformationInviteCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (PIAAInvitesDetailsInformationInvite *)doCopyAccepted:(BOOL)accepted gracePeriodRemaining:(NSString *)gracePeriodRemaining obfuscatedEmail:(NSString *)obfuscatedEmail rewarded:(BOOL)rewarded __attribute__((swift_name("doCopy(accepted:gracePeriodRemaining:obfuscatedEmail:rewarded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL accepted __attribute__((swift_name("accepted")));
@property (readonly) NSString *gracePeriodRemaining __attribute__((swift_name("gracePeriodRemaining")));
@property (readonly) NSString *obfuscatedEmail __attribute__((swift_name("obfuscatedEmail")));
@property (readonly) BOOL rewarded __attribute__((swift_name("rewarded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.InviteCompanion")))
@interface PIAAInvitesDetailsInformationInviteCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAInvitesDetailsInformationInviteCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation")))
@interface PIAAMessageInformation : PIAABase
- (instancetype)initWithId:(int64_t)id link:(PIAAMessageInformationLink * _Nullable)link message:(NSDictionary<NSString *, NSString *> *)message __attribute__((swift_name("init(id:link:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAMessageInformationCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (PIAAMessageInformationLink * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (PIAAMessageInformation *)doCopyId:(int64_t)id link:(PIAAMessageInformationLink * _Nullable)link message:(NSDictionary<NSString *, NSString *> *)message __attribute__((swift_name("doCopy(id:link:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) PIAAMessageInformationLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSDictionary<NSString *, NSString *> *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.Companion")))
@interface PIAAMessageInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAMessageInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.Link")))
@interface PIAAMessageInformationLink : PIAABase
- (instancetype)initWithAction:(PIAAMessageInformationLinkAction *)action text:(NSDictionary<NSString *, NSString *> *)text __attribute__((swift_name("init(action:text:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAMessageInformationLinkCompanion *companion __attribute__((swift_name("companion")));
- (PIAAMessageInformationLinkAction *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NSString *> *)component2 __attribute__((swift_name("component2()")));
- (PIAAMessageInformationLink *)doCopyAction:(PIAAMessageInformationLinkAction *)action text:(NSDictionary<NSString *, NSString *> *)text __attribute__((swift_name("doCopy(action:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIAAMessageInformationLinkAction *action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, NSString *> *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkAction")))
@interface PIAAMessageInformationLinkAction : PIAABase
- (instancetype)initWithSettings:(NSDictionary<NSString *, PIAABoolean *> *)settings uri:(NSString * _Nullable)uri view:(NSString * _Nullable)view __attribute__((swift_name("init(settings:uri:view:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAAMessageInformationLinkActionCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, PIAABoolean *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (PIAAMessageInformationLinkAction *)doCopySettings:(NSDictionary<NSString *, PIAABoolean *> *)settings uri:(NSString * _Nullable)uri view:(NSString * _Nullable)view __attribute__((swift_name("doCopy(settings:uri:view:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, PIAABoolean *> *settings __attribute__((swift_name("settings")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString * _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkActionCompanion")))
@interface PIAAMessageInformationLinkActionCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAMessageInformationLinkActionCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkCompanion")))
@interface PIAAMessageInformationLinkCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAMessageInformationLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedeemInformation")))
@interface PIAARedeemInformation : PIAABase
- (instancetype)initWithMessage:(NSString * _Nullable)message username:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(message:username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAARedeemInformationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedeemInformation.Companion")))
@interface PIAARedeemInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAARedeemInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpInformation")))
@interface PIAASignUpInformation : PIAABase
- (instancetype)initWithStatus:(NSString *)status username:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(status:username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAASignUpInformationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpInformation.Companion")))
@interface PIAASignUpInformationCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAASignUpInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PIAAKotlinEnumCompanion : PIAABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAAKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PIAAKotlinArray<T> : PIAABase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PIAAInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PIAAKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PIAAKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PIAAKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PIAAKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PIAAKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PIAAKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PIAAKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PIAAKotlinx_serialization_coreKSerializer <PIAAKotlinx_serialization_coreSerializationStrategy, PIAAKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PIAAKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PIAAKotlinx_serialization_coreEncoder
@required
- (id<PIAAKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PIAAKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PIAAKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<PIAAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PIAAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PIAAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PIAAKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<PIAAKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<PIAAKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<PIAAKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) PIAAKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PIAAKotlinx_serialization_coreDecoder
@required
- (id<PIAAKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PIAAKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (PIAAKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PIAAKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PIAAKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PIAAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PIAAKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PIAAKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIAAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIAAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PIAAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PIAAKotlinx_serialization_coreSerializersModule : PIAABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<PIAAKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<PIAAKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PIAAKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PIAAKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<PIAAKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIAAKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<PIAAKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIAAKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol PIAAKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PIAAKotlinx_serialization_coreSerialKind : PIAABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PIAAKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PIAAKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIAAKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIAAKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PIAAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PIAAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PIAAKotlinNothing : PIAABase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PIAAKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PIAAKotlinKClass>)kClass provider:(id<PIAAKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PIAAKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PIAAKotlinKClass>)kClass serializer:(id<PIAAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PIAAKotlinKClass>)baseClass actualClass:(id<PIAAKotlinKClass>)actualClass actualSerializer:(id<PIAAKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PIAAKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIAAKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PIAAKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIAAKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PIAAKotlinKClass>)baseClass defaultSerializerProvider:(id<PIAAKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PIAAKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PIAAKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol PIAAKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol PIAAKotlinKClass <PIAAKotlinKDeclarationContainer, PIAAKotlinKAnnotatedElement, PIAAKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
