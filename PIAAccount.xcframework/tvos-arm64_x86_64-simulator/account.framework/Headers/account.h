#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AccountAccountInformation, AccountAccountRequestError, AccountClientStatusInformation, AccountDedicatedIPInformationResponseDedicatedIPInformation, AccountFeatureFlagsInformation, AccountInvitesDetailsInformation, AccountMessageInformation, AccountRedeemInformation, AccountAccountBuilder<T>, AccountPlatform, AccountAccountEndpoint, AccountAmazonSignupInformation, AccountSignUpInformation, AccountAmazonSubscriptionsInformation, AccountAndroidSignupInformation, AccountAndroidSubscriptionsInformation, AccountIOSPaymentInformation, AccountIOSSignupInformation, AccountIOSSubscriptionInformation, AccountKotlinEnumCompanion, AccountKotlinEnum<E>, AccountKotlinArray<T>, AccountAccountUtils, AccountNetworkUtils, AccountDedicatedIPRequestCompanion, AccountAmazonSignupInformationCompanion, AccountAndroidSignupInformationReceipt, AccountAndroidSignupInformationCompanion, AccountAndroidSignupInformationReceiptCompanion, AccountIOSPaymentInformationCompanion, AccountIOSSignupInformationCompanion, AccountAccountInformationCompanion, AccountAmazonSubscriptionsInformationAvailableProduct, AccountAmazonSubscriptionsInformationCompanion, AccountAmazonSubscriptionsInformationAvailableProductCompanion, AccountAndroidSubscriptionsInformationAvailableProduct, AccountAndroidSubscriptionsInformationCompanion, AccountAndroidSubscriptionsInformationAvailableProductCompanion, AccountClientStatusInformationCompanion, AccountDedicatedIPInformationResponseCompanion, AccountDedicatedIPInformationResponse, AccountDedicatedIPInformationResponseStatus, AccountDedicatedIPInformationResponseDedicatedIPInformationCompanion, AccountFeatureFlagsInformationCompanion, AccountIOSSubscriptionInformationAvailableProduct, AccountIOSSubscriptionInformationReceipt, AccountIOSSubscriptionInformationCompanion, AccountIOSSubscriptionInformationAvailableProductCompanion, AccountIOSSubscriptionInformationReceiptCompanion, AccountInvitesDetailsInformationInvite, AccountInvitesDetailsInformationCompanion, AccountInvitesDetailsInformationInviteCompanion, AccountMessageInformationLink, AccountMessageInformationCompanion, AccountMessageInformationLinkAction, AccountMessageInformationLinkCompanion, AccountMessageInformationLinkActionCompanion, AccountRedeemInformationCompanion, AccountSignUpInformationCompanion, AccountKotlinx_serialization_coreSerializersModule, AccountKotlinx_serialization_coreSerialKind, AccountKotlinNothing;

@protocol AccountIAccountEndpointProvider, AccountAccountAPI, AccountKotlinComparable, AccountKotlinx_serialization_coreKSerializer, AccountKotlinIterator, AccountKotlinx_serialization_coreEncoder, AccountKotlinx_serialization_coreSerialDescriptor, AccountKotlinx_serialization_coreSerializationStrategy, AccountKotlinx_serialization_coreDecoder, AccountKotlinx_serialization_coreDeserializationStrategy, AccountKotlinx_serialization_coreCompositeEncoder, AccountKotlinAnnotation, AccountKotlinx_serialization_coreCompositeDecoder, AccountKotlinx_serialization_coreSerializersModuleCollector, AccountKotlinKClass, AccountKotlinKDeclarationContainer, AccountKotlinKAnnotatedElement, AccountKotlinKClassifier;

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
@interface AccountBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AccountBase (AccountBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AccountMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AccountMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAccountKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AccountNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface AccountByte : AccountNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AccountUByte : AccountNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AccountShort : AccountNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AccountUShort : AccountNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AccountInt : AccountNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AccountUInt : AccountNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AccountLong : AccountNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AccountULong : AccountNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AccountFloat : AccountNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AccountDouble : AccountNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AccountBoolean : AccountNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AccountAPI")))
@protocol AccountAccountAPI
@required
- (void)accountDetailsCallback:(void (^)(AccountAccountInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("accountDetails(callback:)")));
- (NSString * _Nullable)apiToken __attribute__((swift_name("apiToken()")));
- (void)clientStatusCallback:(void (^)(AccountClientStatusInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("clientStatus(callback:)")));
- (void)dedicatedIPsIpTokens:(NSArray<NSString *> *)ipTokens callback:(void (^)(NSArray<AccountDedicatedIPInformationResponseDedicatedIPInformation *> *, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("dedicatedIPs(ipTokens:callback:)")));
- (void)deleteAccountCallback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("deleteAccount(callback:)")));
- (void)featureFlagsCallback:(void (^)(AccountFeatureFlagsInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("featureFlags(callback:)")));
- (void)invitesDetailsCallback:(void (^)(AccountInvitesDetailsInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("invitesDetails(callback:)")));
- (void)loginLinkEmail:(NSString *)email callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("loginLink(email:callback:)")));
- (void)loginWithCredentialsUsername:(NSString *)username password:(NSString *)password callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("loginWithCredentials(username:password:callback:)")));
- (void)logoutCallback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("logout(callback:)")));
- (void)messageAppVersion:(NSString *)appVersion callback:(void (^)(AccountMessageInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("message(appVersion:callback:)")));
- (void)migrateApiTokenApiToken:(NSString *)apiToken callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("migrateApiToken(apiToken:callback:)")));
- (void)redeemEmail:(NSString *)email code:(NSString *)code callback:(void (^)(AccountRedeemInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("redeem(email:code:callback:)")));
- (void)renewDedicatedIPIpToken:(NSString *)ipToken callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("renewDedicatedIP(ipToken:callback:)")));
- (void)sendInviteRecipientEmail:(NSString *)recipientEmail recipientName:(NSString *)recipientName callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("sendInvite(recipientEmail:recipientName:callback:)")));
- (void)setEmailEmail:(NSString *)email resetPassword:(BOOL)resetPassword callback:(void (^)(NSString * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("setEmail(email:resetPassword:callback:)")));
- (NSString * _Nullable)vpnToken __attribute__((swift_name("vpnToken()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountBuilder")))
@interface AccountAccountBuilder<T> : AccountBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)build __attribute__((swift_name("build()")));
- (AccountAccountBuilder<T> *)setCertificateCertificate:(NSString * _Nullable)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (AccountAccountBuilder<T> *)setEndpointProviderEndpointsProvider:(id<AccountIAccountEndpointProvider>)endpointsProvider __attribute__((swift_name("setEndpointProvider(endpointsProvider:)")));
- (AccountAccountBuilder<T> *)setPlatformPlatform:(AccountPlatform *)platform __attribute__((swift_name("setPlatform(platform:)")));
- (AccountAccountBuilder<T> *)setUserAgentValueUserAgentValue:(NSString *)userAgentValue __attribute__((swift_name("setUserAgentValue(userAgentValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountEndpoint")))
@interface AccountAccountEndpoint : AccountBase
- (instancetype)initWithIpOrRootDomain:(NSString *)ipOrRootDomain isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(ipOrRootDomain:isProxy:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (AccountAccountEndpoint *)doCopyIpOrRootDomain:(NSString *)ipOrRootDomain isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(ipOrRootDomain:isProxy:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *ipOrRootDomain __attribute__((swift_name("ipOrRootDomain")));
@property (readonly) BOOL isProxy __attribute__((swift_name("isProxy")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRequestError")))
@interface AccountAccountRequestError : AccountBase
- (instancetype)initWithCode:(int32_t)code message:(NSString * _Nullable)message retryAfterSeconds:(int64_t)retryAfterSeconds __attribute__((swift_name("init(code:message:retryAfterSeconds:)"))) __attribute__((objc_designated_initializer));
- (AccountAccountRequestError *)doCopyCode:(int32_t)code message:(NSString * _Nullable)message retryAfterSeconds:(int64_t)retryAfterSeconds __attribute__((swift_name("doCopy(code:message:retryAfterSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) int64_t retryAfterSeconds __attribute__((swift_name("retryAfterSeconds")));
@end

__attribute__((swift_name("AndroidAccountAPI")))
@protocol AccountAndroidAccountAPI <AccountAccountAPI>
@required
- (void)amazonLoginWithReceiptReceiptId:(NSString *)receiptId userId:(NSString *)userId store:(NSString *)store callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("amazonLoginWithReceipt(receiptId:userId:store:callback:)")));
- (void)amazonSignUpInformation:(AccountAmazonSignupInformation *)information callback:(void (^)(AccountSignUpInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("amazonSignUp(information:callback:)")));
- (void)amazonSubscriptionsCallback:(void (^)(AccountAmazonSubscriptionsInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("amazonSubscriptions(callback:)")));
- (void)loginWithReceiptStore:(NSString *)store token:(NSString *)token productId:(NSString *)productId applicationPackage:(NSString *)applicationPackage callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("loginWithReceipt(store:token:productId:applicationPackage:callback:)")));
- (void)signUpInformation:(AccountAndroidSignupInformation *)information callback:(void (^)(AccountSignUpInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("signUp(information:callback:)")));
- (void)subscriptionsCallback:(void (^)(AccountAndroidSubscriptionsInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("subscriptions(callback:)")));
@end

__attribute__((swift_name("IAccountEndpointProvider")))
@protocol AccountIAccountEndpointProvider
@required
- (NSArray<AccountAccountEndpoint *> *)accountEndpoints __attribute__((swift_name("accountEndpoints()")));
@end

__attribute__((swift_name("IOSAccountAPI")))
@protocol AccountIOSAccountAPI <AccountAccountAPI>
@required
- (void)loginWithReceiptReceiptBase64:(NSString *)receiptBase64 callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("loginWithReceipt(receiptBase64:callback:)")));
- (void)paymentUsername:(NSString *)username password:(NSString *)password information:(AccountIOSPaymentInformation *)information callback:(void (^)(NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("payment(username:password:information:callback:)")));
- (void)setEmailUsername:(NSString *)username password:(NSString *)password email:(NSString *)email resetPassword:(BOOL)resetPassword callback:(void (^)(NSString * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("setEmail(username:password:email:resetPassword:callback:)")));
- (void)signUpInformation:(AccountIOSSignupInformation *)information callback_:(void (^)(AccountSignUpInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("signUp(information:callback_:)")));
- (void)subscriptionsReceipt:(NSString * _Nullable)receipt callback:(void (^)(AccountIOSSubscriptionInformation * _Nullable, NSArray<AccountAccountRequestError *> *))callback __attribute__((swift_name("subscriptions(receipt:callback:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AccountKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AccountKotlinEnum<E> : AccountBase <AccountKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface AccountPlatform : AccountKotlinEnum<AccountPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AccountPlatform *ios __attribute__((swift_name("ios")));
@property (class, readonly) AccountPlatform *android __attribute__((swift_name("android")));
+ (AccountKotlinArray<AccountPlatform *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AccountPlatform *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountUtils")))
@interface AccountAccountUtils : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accountUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAccountUtils *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkUtils")))
@interface AccountNetworkUtils : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountNetworkUtils *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPRequest")))
@interface AccountDedicatedIPRequest : AccountBase
- (instancetype)initWithTokens:(NSArray<NSString *> *)tokens __attribute__((swift_name("init(tokens:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountDedicatedIPRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *tokens __attribute__((swift_name("tokens")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPRequest.Companion")))
@interface AccountDedicatedIPRequestCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountDedicatedIPRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSignupInformation")))
@interface AccountAmazonSignupInformation : AccountBase
- (instancetype)initWithUserId:(NSString *)userId receiptId:(NSString *)receiptId email:(NSString *)email __attribute__((swift_name("init(userId:receiptId:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAmazonSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountAmazonSignupInformation *)doCopyUserId:(NSString *)userId receiptId:(NSString *)receiptId email:(NSString *)email __attribute__((swift_name("doCopy(userId:receiptId:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *receiptId __attribute__((swift_name("receiptId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSignupInformation.Companion")))
@interface AccountAmazonSignupInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAmazonSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation")))
@interface AccountAndroidSignupInformation : AccountBase
- (instancetype)initWithStore:(NSString *)store receipt:(AccountAndroidSignupInformationReceipt *)receipt marketing:(NSString * _Nullable)marketing __attribute__((swift_name("init(store:receipt:marketing:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAndroidSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountAndroidSignupInformation *)doCopyStore:(NSString *)store receipt:(AccountAndroidSignupInformationReceipt *)receipt marketing:(NSString * _Nullable)marketing __attribute__((swift_name("doCopy(store:receipt:marketing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable marketing __attribute__((swift_name("marketing")));
@property (readonly) AccountAndroidSignupInformationReceipt *receipt __attribute__((swift_name("receipt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.Companion")))
@interface AccountAndroidSignupInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAndroidSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.Receipt")))
@interface AccountAndroidSignupInformationReceipt : AccountBase
- (instancetype)initWithOrderId:(NSString *)orderId token:(NSString *)token sku:(NSString *)sku __attribute__((swift_name("init(orderId:token:sku:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAndroidSignupInformationReceiptCompanion *companion __attribute__((swift_name("companion")));
- (AccountAndroidSignupInformationReceipt *)doCopyOrderId:(NSString *)orderId token:(NSString *)token sku:(NSString *)sku __attribute__((swift_name("doCopy(orderId:token:sku:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));
@property (readonly) NSString *sku __attribute__((swift_name("sku")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSignupInformation.ReceiptCompanion")))
@interface AccountAndroidSignupInformationReceiptCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAndroidSignupInformationReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPaymentInformation")))
@interface AccountIOSPaymentInformation : AccountBase
- (instancetype)initWithStore:(NSString *)store receipt:(NSString *)receipt marketing:(NSString *)marketing debug:(NSString *)debug __attribute__((swift_name("init(store:receipt:marketing:debug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountIOSPaymentInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountIOSPaymentInformation *)doCopyStore:(NSString *)store receipt:(NSString *)receipt marketing:(NSString *)marketing debug:(NSString *)debug __attribute__((swift_name("doCopy(store:receipt:marketing:debug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *debug __attribute__((swift_name("debug")));
@property (readonly) NSString *marketing __attribute__((swift_name("marketing")));
@property (readonly) NSString *receipt __attribute__((swift_name("receipt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPaymentInformation.Companion")))
@interface AccountIOSPaymentInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountIOSPaymentInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSignupInformation")))
@interface AccountIOSSignupInformation : AccountBase
- (instancetype)initWithStore:(NSString *)store receipt:(NSString *)receipt email:(NSString *)email marketing:(NSString * _Nullable)marketing debug:(NSString * _Nullable)debug __attribute__((swift_name("init(store:receipt:email:marketing:debug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountIOSSignupInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountIOSSignupInformation *)doCopyStore:(NSString *)store receipt:(NSString *)receipt email:(NSString *)email marketing:(NSString * _Nullable)marketing debug:(NSString * _Nullable)debug __attribute__((swift_name("doCopy(store:receipt:email:marketing:debug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable debug __attribute__((swift_name("debug")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable marketing __attribute__((swift_name("marketing")));
@property (readonly) NSString *receipt __attribute__((swift_name("receipt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSignupInformation.Companion")))
@interface AccountIOSSignupInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountIOSSignupInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInformation")))
@interface AccountAccountInformation : AccountBase
- (instancetype)initWithActive:(BOOL)active canInvite:(BOOL)canInvite canceled:(BOOL)canceled daysRemaining:(int32_t)daysRemaining email:(NSString *)email expirationTime:(int32_t)expirationTime expireAlert:(BOOL)expireAlert expired:(BOOL)expired needsPayment:(BOOL)needsPayment plan:(NSString *)plan productId:(NSString * _Nullable)productId recurring:(BOOL)recurring renewUrl:(NSString *)renewUrl renewable:(BOOL)renewable username:(NSString *)username __attribute__((swift_name("init(active:canInvite:canceled:daysRemaining:email:expirationTime:expireAlert:expired:needsPayment:plan:productId:recurring:renewUrl:renewable:username:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAccountInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountAccountInformation *)doCopyActive:(BOOL)active canInvite:(BOOL)canInvite canceled:(BOOL)canceled daysRemaining:(int32_t)daysRemaining email:(NSString *)email expirationTime:(int32_t)expirationTime expireAlert:(BOOL)expireAlert expired:(BOOL)expired needsPayment:(BOOL)needsPayment plan:(NSString *)plan productId:(NSString * _Nullable)productId recurring:(BOOL)recurring renewUrl:(NSString *)renewUrl renewable:(BOOL)renewable username:(NSString *)username __attribute__((swift_name("doCopy(active:canInvite:canceled:daysRemaining:email:expirationTime:expireAlert:expired:needsPayment:plan:productId:recurring:renewUrl:renewable:username:)")));
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
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInformation.Companion")))
@interface AccountAccountInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAccountInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation")))
@interface AccountAmazonSubscriptionsInformation : AccountBase
- (instancetype)initWithAvailableProducts:(NSArray<AccountAmazonSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("init(availableProducts:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAmazonSubscriptionsInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountAmazonSubscriptionsInformation *)doCopyAvailableProducts:(NSArray<AccountAmazonSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AccountAmazonSubscriptionsInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.AvailableProduct")))
@interface AccountAmazonSubscriptionsInformationAvailableProduct : AccountBase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(double)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAmazonSubscriptionsInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (AccountAmazonSubscriptionsInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(double)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) double price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.AvailableProductCompanion")))
@interface AccountAmazonSubscriptionsInformationAvailableProductCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAmazonSubscriptionsInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmazonSubscriptionsInformation.Companion")))
@interface AccountAmazonSubscriptionsInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAmazonSubscriptionsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation")))
@interface AccountAndroidSubscriptionsInformation : AccountBase
- (instancetype)initWithAvailableProducts:(NSArray<AccountAndroidSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("init(availableProducts:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAndroidSubscriptionsInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountAndroidSubscriptionsInformation *)doCopyAvailableProducts:(NSArray<AccountAndroidSubscriptionsInformationAvailableProduct *> *)availableProducts status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AccountAndroidSubscriptionsInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.AvailableProduct")))
@interface AccountAndroidSubscriptionsInformationAvailableProduct : AccountBase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountAndroidSubscriptionsInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (AccountAndroidSubscriptionsInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.AvailableProductCompanion")))
@interface AccountAndroidSubscriptionsInformationAvailableProductCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAndroidSubscriptionsInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSubscriptionsInformation.Companion")))
@interface AccountAndroidSubscriptionsInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountAndroidSubscriptionsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatusInformation")))
@interface AccountClientStatusInformation : AccountBase
- (instancetype)initWithConnected:(BOOL)connected ip:(NSString *)ip __attribute__((swift_name("init(connected:ip:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountClientStatusInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountClientStatusInformation *)doCopyConnected:(BOOL)connected ip:(NSString *)ip __attribute__((swift_name("doCopy(connected:ip:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL connected __attribute__((swift_name("connected")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatusInformation.Companion")))
@interface AccountClientStatusInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountClientStatusInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse")))
@interface AccountDedicatedIPInformationResponse : AccountBase
- (instancetype)initWithResult:(NSArray<AccountDedicatedIPInformationResponseDedicatedIPInformation *> *)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountDedicatedIPInformationResponseCompanion *companion __attribute__((swift_name("companion")));
- (AccountDedicatedIPInformationResponse *)doCopyResult:(NSArray<AccountDedicatedIPInformationResponseDedicatedIPInformation *> *)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AccountDedicatedIPInformationResponseDedicatedIPInformation *> *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.Companion")))
@interface AccountDedicatedIPInformationResponseCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountDedicatedIPInformationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.DedicatedIPInformation")))
@interface AccountDedicatedIPInformationResponseDedicatedIPInformation : AccountBase
- (instancetype)initWithId:(NSString * _Nullable)id ip:(NSString * _Nullable)ip cn:(NSString * _Nullable)cn groups:(NSArray<NSString *> * _Nullable)groups dip_expire:(AccountLong * _Nullable)dip_expire dipToken:(NSString *)dipToken status:(AccountDedicatedIPInformationResponseStatus *)status __attribute__((swift_name("init(id:ip:cn:groups:dip_expire:dipToken:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountDedicatedIPInformationResponseDedicatedIPInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountDedicatedIPInformationResponseDedicatedIPInformation *)doCopyId:(NSString * _Nullable)id ip:(NSString * _Nullable)ip cn:(NSString * _Nullable)cn groups:(NSArray<NSString *> * _Nullable)groups dip_expire:(AccountLong * _Nullable)dip_expire dipToken:(NSString *)dipToken status:(AccountDedicatedIPInformationResponseStatus *)status __attribute__((swift_name("doCopy(id:ip:cn:groups:dip_expire:dipToken:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cn __attribute__((swift_name("cn")));
@property (readonly) NSString *dipToken __attribute__((swift_name("dipToken")));
@property (readonly) AccountLong * _Nullable dip_expire __attribute__((swift_name("dip_expire")));
@property (readonly) NSArray<NSString *> * _Nullable groups __attribute__((swift_name("groups")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable ip __attribute__((swift_name("ip")));
@property (readonly) AccountDedicatedIPInformationResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.DedicatedIPInformationCompanion")))
@interface AccountDedicatedIPInformationResponseDedicatedIPInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountDedicatedIPInformationResponseDedicatedIPInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DedicatedIPInformationResponse.Status")))
@interface AccountDedicatedIPInformationResponseStatus : AccountKotlinEnum<AccountDedicatedIPInformationResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AccountDedicatedIPInformationResponseStatus *active __attribute__((swift_name("active")));
@property (class, readonly) AccountDedicatedIPInformationResponseStatus *expired __attribute__((swift_name("expired")));
@property (class, readonly) AccountDedicatedIPInformationResponseStatus *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) AccountDedicatedIPInformationResponseStatus *error __attribute__((swift_name("error")));
+ (AccountKotlinArray<AccountDedicatedIPInformationResponseStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AccountDedicatedIPInformationResponseStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureFlagsInformation")))
@interface AccountFeatureFlagsInformation : AccountBase
- (instancetype)initWithFlags:(NSArray<NSString *> *)flags latestVersionPiax:(NSArray<NSString *> *)latestVersionPiax __attribute__((swift_name("init(flags:latestVersionPiax:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountFeatureFlagsInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountFeatureFlagsInformation *)doCopyFlags:(NSArray<NSString *> *)flags latestVersionPiax:(NSArray<NSString *> *)latestVersionPiax __attribute__((swift_name("doCopy(flags:latestVersionPiax:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *flags __attribute__((swift_name("flags")));
@property (readonly) NSArray<NSString *> *latestVersionPiax __attribute__((swift_name("latestVersionPiax")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureFlagsInformation.Companion")))
@interface AccountFeatureFlagsInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountFeatureFlagsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation")))
@interface AccountIOSSubscriptionInformation : AccountBase
- (instancetype)initWithAvailableProducts:(NSArray<AccountIOSSubscriptionInformationAvailableProduct *> *)availableProducts eligibleForTrial:(BOOL)eligibleForTrial receipt:(AccountIOSSubscriptionInformationReceipt *)receipt status:(NSString *)status __attribute__((swift_name("init(availableProducts:eligibleForTrial:receipt:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountIOSSubscriptionInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountIOSSubscriptionInformation *)doCopyAvailableProducts:(NSArray<AccountIOSSubscriptionInformationAvailableProduct *> *)availableProducts eligibleForTrial:(BOOL)eligibleForTrial receipt:(AccountIOSSubscriptionInformationReceipt *)receipt status:(NSString *)status __attribute__((swift_name("doCopy(availableProducts:eligibleForTrial:receipt:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AccountIOSSubscriptionInformationAvailableProduct *> *availableProducts __attribute__((swift_name("availableProducts")));
@property (readonly) BOOL eligibleForTrial __attribute__((swift_name("eligibleForTrial")));
@property (readonly) AccountIOSSubscriptionInformationReceipt *receipt __attribute__((swift_name("receipt")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.AvailableProduct")))
@interface AccountIOSSubscriptionInformationAvailableProduct : AccountBase
- (instancetype)initWithId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("init(id:legacy:plan:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountIOSSubscriptionInformationAvailableProductCompanion *companion __attribute__((swift_name("companion")));
- (AccountIOSSubscriptionInformationAvailableProduct *)doCopyId:(NSString *)id legacy:(BOOL)legacy plan:(NSString *)plan price:(NSString *)price __attribute__((swift_name("doCopy(id:legacy:plan:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL legacy __attribute__((swift_name("legacy")));
@property (readonly) NSString *plan __attribute__((swift_name("plan")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.AvailableProductCompanion")))
@interface AccountIOSSubscriptionInformationAvailableProductCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountIOSSubscriptionInformationAvailableProductCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.Companion")))
@interface AccountIOSSubscriptionInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountIOSSubscriptionInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.Receipt")))
@interface AccountIOSSubscriptionInformationReceipt : AccountBase
- (instancetype)initWithEligibleForTrial:(BOOL)eligibleForTrial __attribute__((swift_name("init(eligibleForTrial:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountIOSSubscriptionInformationReceiptCompanion *companion __attribute__((swift_name("companion")));
- (AccountIOSSubscriptionInformationReceipt *)doCopyEligibleForTrial:(BOOL)eligibleForTrial __attribute__((swift_name("doCopy(eligibleForTrial:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL eligibleForTrial __attribute__((swift_name("eligibleForTrial")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSubscriptionInformation.ReceiptCompanion")))
@interface AccountIOSSubscriptionInformationReceiptCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountIOSSubscriptionInformationReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation")))
@interface AccountInvitesDetailsInformation : AccountBase
- (instancetype)initWithInvites:(NSArray<AccountInvitesDetailsInformationInvite *> *)invites totalFreeDaysGiven:(int32_t)totalFreeDaysGiven totalInvitesRewarded:(int32_t)totalInvitesRewarded totalInvitesSent:(int32_t)totalInvitesSent uniqueReferralLink:(NSString *)uniqueReferralLink __attribute__((swift_name("init(invites:totalFreeDaysGiven:totalInvitesRewarded:totalInvitesSent:uniqueReferralLink:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountInvitesDetailsInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountInvitesDetailsInformation *)doCopyInvites:(NSArray<AccountInvitesDetailsInformationInvite *> *)invites totalFreeDaysGiven:(int32_t)totalFreeDaysGiven totalInvitesRewarded:(int32_t)totalInvitesRewarded totalInvitesSent:(int32_t)totalInvitesSent uniqueReferralLink:(NSString *)uniqueReferralLink __attribute__((swift_name("doCopy(invites:totalFreeDaysGiven:totalInvitesRewarded:totalInvitesSent:uniqueReferralLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AccountInvitesDetailsInformationInvite *> *invites __attribute__((swift_name("invites")));
@property (readonly) int32_t totalFreeDaysGiven __attribute__((swift_name("totalFreeDaysGiven")));
@property (readonly) int32_t totalInvitesRewarded __attribute__((swift_name("totalInvitesRewarded")));
@property (readonly) int32_t totalInvitesSent __attribute__((swift_name("totalInvitesSent")));
@property (readonly) NSString *uniqueReferralLink __attribute__((swift_name("uniqueReferralLink")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.Companion")))
@interface AccountInvitesDetailsInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountInvitesDetailsInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.Invite")))
@interface AccountInvitesDetailsInformationInvite : AccountBase
- (instancetype)initWithAccepted:(BOOL)accepted gracePeriodRemaining:(NSString *)gracePeriodRemaining obfuscatedEmail:(NSString *)obfuscatedEmail rewarded:(BOOL)rewarded __attribute__((swift_name("init(accepted:gracePeriodRemaining:obfuscatedEmail:rewarded:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountInvitesDetailsInformationInviteCompanion *companion __attribute__((swift_name("companion")));
- (AccountInvitesDetailsInformationInvite *)doCopyAccepted:(BOOL)accepted gracePeriodRemaining:(NSString *)gracePeriodRemaining obfuscatedEmail:(NSString *)obfuscatedEmail rewarded:(BOOL)rewarded __attribute__((swift_name("doCopy(accepted:gracePeriodRemaining:obfuscatedEmail:rewarded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL accepted __attribute__((swift_name("accepted")));
@property (readonly) NSString *gracePeriodRemaining __attribute__((swift_name("gracePeriodRemaining")));
@property (readonly) NSString *obfuscatedEmail __attribute__((swift_name("obfuscatedEmail")));
@property (readonly) BOOL rewarded __attribute__((swift_name("rewarded")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvitesDetailsInformation.InviteCompanion")))
@interface AccountInvitesDetailsInformationInviteCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountInvitesDetailsInformationInviteCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation")))
@interface AccountMessageInformation : AccountBase
- (instancetype)initWithId:(int64_t)id link:(AccountMessageInformationLink * _Nullable)link message:(NSDictionary<NSString *, NSString *> *)message __attribute__((swift_name("init(id:link:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountMessageInformationCompanion *companion __attribute__((swift_name("companion")));
- (AccountMessageInformation *)doCopyId:(int64_t)id link:(AccountMessageInformationLink * _Nullable)link message:(NSDictionary<NSString *, NSString *> *)message __attribute__((swift_name("doCopy(id:link:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) AccountMessageInformationLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSDictionary<NSString *, NSString *> *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.Companion")))
@interface AccountMessageInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountMessageInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.Link")))
@interface AccountMessageInformationLink : AccountBase
- (instancetype)initWithAction:(AccountMessageInformationLinkAction *)action text:(NSDictionary<NSString *, NSString *> *)text __attribute__((swift_name("init(action:text:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountMessageInformationLinkCompanion *companion __attribute__((swift_name("companion")));
- (AccountMessageInformationLink *)doCopyAction:(AccountMessageInformationLinkAction *)action text:(NSDictionary<NSString *, NSString *> *)text __attribute__((swift_name("doCopy(action:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AccountMessageInformationLinkAction *action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, NSString *> *text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkAction")))
@interface AccountMessageInformationLinkAction : AccountBase
- (instancetype)initWithSettings:(NSDictionary<NSString *, AccountBoolean *> *)settings uri:(NSString * _Nullable)uri view:(NSString * _Nullable)view __attribute__((swift_name("init(settings:uri:view:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountMessageInformationLinkActionCompanion *companion __attribute__((swift_name("companion")));
- (AccountMessageInformationLinkAction *)doCopySettings:(NSDictionary<NSString *, AccountBoolean *> *)settings uri:(NSString * _Nullable)uri view:(NSString * _Nullable)view __attribute__((swift_name("doCopy(settings:uri:view:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, AccountBoolean *> *settings __attribute__((swift_name("settings")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkActionCompanion")))
@interface AccountMessageInformationLinkActionCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountMessageInformationLinkActionCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageInformation.LinkCompanion")))
@interface AccountMessageInformationLinkCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountMessageInformationLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedeemInformation")))
@interface AccountRedeemInformation : AccountBase
- (instancetype)initWithMessage:(NSString * _Nullable)message username:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(message:username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountRedeemInformationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedeemInformation.Companion")))
@interface AccountRedeemInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountRedeemInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpInformation")))
@interface AccountSignUpInformation : AccountBase
- (instancetype)initWithStatus:(NSString *)status username:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(status:username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccountSignUpInformationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpInformation.Companion")))
@interface AccountSignUpInformationCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountSignUpInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AccountKotlinEnumCompanion : AccountBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccountKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AccountKotlinArray<T> : AccountBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AccountInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AccountKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AccountKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AccountKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AccountKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AccountKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AccountKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AccountKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AccountKotlinx_serialization_coreKSerializer <AccountKotlinx_serialization_coreSerializationStrategy, AccountKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AccountKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AccountKotlinx_serialization_coreEncoder
@required
- (id<AccountKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AccountKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AccountKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AccountKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AccountKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AccountKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AccountKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AccountKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AccountKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AccountKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AccountKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AccountKotlinx_serialization_coreDecoder
@required
- (id<AccountKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AccountKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AccountKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AccountKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AccountKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AccountKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AccountKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AccountKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AccountKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AccountKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AccountKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AccountKotlinx_serialization_coreSerializersModule : AccountBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AccountKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AccountKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AccountKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AccountKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AccountKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AccountKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AccountKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AccountKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AccountKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AccountKotlinx_serialization_coreSerialKind : AccountBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AccountKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AccountKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AccountKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AccountKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AccountKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AccountKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AccountKotlinNothing : AccountBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AccountKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AccountKotlinKClass>)kClass provider:(id<AccountKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AccountKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AccountKotlinKClass>)kClass serializer:(id<AccountKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AccountKotlinKClass>)baseClass actualClass:(id<AccountKotlinKClass>)actualClass actualSerializer:(id<AccountKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AccountKotlinKClass>)baseClass defaultDeserializerProvider:(id<AccountKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AccountKotlinKClass>)baseClass defaultDeserializerProvider:(id<AccountKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AccountKotlinKClass>)baseClass defaultSerializerProvider:(id<AccountKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AccountKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AccountKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AccountKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AccountKotlinKClass <AccountKotlinKDeclarationContainer, AccountKotlinKAnnotatedElement, AccountKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
