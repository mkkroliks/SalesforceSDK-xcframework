#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SALESFORCESDKCORE_SWIFT_H
#define SALESFORCESDKCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SalesforceSDKCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSData;
@class NSURL;
@class NSString;

SWIFT_CLASS_NAMED("DecryptStream")
@interface SFSDKDecryptStream : NSInputStream
@property (nonatomic, readonly) NSStreamStatus streamStatus;
@property (nonatomic, readonly) BOOL hasBytesAvailable;
- (nonnull instancetype)initWithData:(NSData * _Nonnull)data OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithURL:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithFileAtPath:(NSString * _Nonnull)path;
/// Setup for encryption. Always call this method before using this stream.
/// \param key Encryption key to use
///
- (void)setupEncryptionKey:(NSData * _Nonnull)key;
- (void)open;
- (NSInteger)read:(uint8_t * _Nonnull)buffer maxLength:(NSUInteger)len SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)propertyForKey:(NSStreamPropertyKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (BOOL)getBuffer:(uint8_t * _Nullable * _Nonnull)buffer length:(NSInteger * _Nonnull)len SWIFT_WARN_UNUSED_RESULT;
- (void)close;
@end


SWIFT_CLASS_NAMED("EncryptStream")
@interface SFSDKEncryptStream : NSOutputStream
@property (nonatomic, readonly) NSStreamStatus streamStatus;
@property (nonatomic, readonly) BOOL hasSpaceAvailable;
- (nonnull instancetype)initToMemory OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initToBuffer:(uint8_t * _Nonnull)buffer capacity:(NSUInteger)capacity OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithURL:(NSURL * _Nonnull)url append:(BOOL)shouldAppend OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initToFileAtPath:(NSString * _Nonnull)path append:(BOOL)shouldAppend;
/// Setup for encryption. Always call this method before using this stream.
/// \param key Encryption key to use
///
- (void)setupEncryptionKey:(NSData * _Nonnull)key;
- (id _Nullable)propertyForKey:(NSStreamPropertyKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)open;
- (NSInteger)write:(uint8_t const * _Nonnull)buffer maxLength:(NSUInteger)len SWIFT_WARN_UNUSED_RESULT;
- (void)close;
@end


SWIFT_CLASS_NAMED("Encryptor")
@interface SFSDKEncryptor : NSObject
/// Encrypts data with a given key
/// \param data Data to encrypt
///
/// \param key Data representation of symmetric key to encrypt with
///
///
/// returns:
/// Encrypted data
+ (NSData * _Nullable)encryptWithData:(NSData * _Nonnull)data using:(NSData * _Nonnull)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("", "encryptData:key:error:");
/// Encrypts data with a given key
/// \param data Data to encrypt
///
/// \param key Data representation of symmetric key to encrypt with
///
///
/// returns:
/// Encrypted data
+ (NSData * _Nullable)encryptData:(NSData * _Nonnull)data key:(NSData * _Nullable)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Decrypts data with a given key
/// \param data Data to decrypt
///
/// \param key Data representation of symmetric key to decrypt with
///
///
/// returns:
/// Decrypted data
+ (NSData * _Nullable)decryptWithData:(NSData * _Nonnull)data using:(NSData * _Nonnull)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("", "decryptData:key:error:");
/// Decrypts data with a given key
/// \param data Data to decrypt
///
/// \param key Data representation of symmetric key to decrypt with
///
///
/// returns:
/// Decrypted data
+ (NSData * _Nullable)decryptData:(NSData * _Nonnull)data key:(NSData * _Nullable)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("KeyGenerator")
@interface SFSDKKeyGenerator : NSObject
/// Returns an encryption key for the given label. If the key doesn’t already exist, it
/// will be created.
/// \param label Identifier for the key
///
///
/// returns:
/// Data representation of a symmetric encryption key
+ (NSData * _Nullable)encryptionKeyFor:(NSString * _Nonnull)label error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Remove the encryption key for the given label.
/// \param label Identifier for the key
///
///
/// returns:
/// If removal was successful or not
+ (BOOL)removeEncryptionKeyFor:(NSString * _Nonnull)label;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SFEncryptionKey;
@class SFUserAccount;

/// File-based key-value storage
SWIFT_CLASS_NAMED("KeyValueEncryptedFileStore")
@interface SFSDKKeyValueEncryptedFileStore : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nonnull storeDirectory;
@property (nonatomic, readonly, copy) NSString * _Nonnull storeName;
@property (nonatomic, readonly) NSInteger storeVersion;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger maxStoreNameLength;)
+ (NSInteger)maxStoreNameLength SWIFT_WARN_UNUSED_RESULT;
/// Creates a store.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
/// \param encryptionKey Encryption key for the store.
///
- (nullable instancetype)initWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name encryptionKey:(SFEncryptionKey * _Nonnull)encryptionKey SWIFT_DEPRECATED_MSG("", "initWithParentDirectory:name:");
/// Creates a store.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
- (nullable instancetype)initWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name;
/// Upgrades the encryption of a store created with SFEncryptionKey to a new key provided by Mobile SDK. Only use this if the store was originally created
/// by initializing KeyValueEncyptedFileStore directly rather than using the shared store methods.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
/// \param legacyKey SFEncryptionKey store was originally created with.
///
+ (void)updateEncryptionWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name legacyKey:(SFEncryptionKey * _Nonnull)legacyKey;
/// Returns a shared store instance with the given name for the current user.
/// \param name Name of the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedStoreWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Returns a shared store instance with the given name for the given user.
/// \param name Name of the store.
///
/// \param user The user account associated with the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedStoreWithName:(NSString * _Nonnull)name user:(SFUserAccount * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
/// Returns a shared global store instance with the given name. This store will not be specific to a particular user.
/// \param name Name of the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedGlobalStoreWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// All of the store names from this app for the current user.
+ (NSArray<NSString *> * _Nonnull)allStoreNames SWIFT_WARN_UNUSED_RESULT;
/// All of the store names from this app for the given user.
/// \param user Associated user account.
///
+ (NSArray<NSString *> * _Nonnull)allStoreNamesForUser:(SFUserAccount * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
/// All of the global store names from this app.
+ (NSArray<NSString *> * _Nonnull)allGlobalStoreNames SWIFT_WARN_UNUSED_RESULT;
/// Completely removes a persisted shared store with the given name for the current user.
/// \param name Name of the store.
///
+ (void)removeSharedStoreWithName:(NSString * _Nonnull)name;
/// Completely removes a persisted shared store with the given name for the given user.
/// \param name Name of the store.
///
/// \param user The user account associated with the store.
///
+ (void)removeSharedStoreWithName:(NSString * _Nonnull)name forUser:(SFUserAccount * _Nonnull)user;
/// Completely removes a persisted shared global store with the given name.
/// \param name Name of the store.
///
+ (void)removeSharedGlobalStoreWithName:(NSString * _Nonnull)name;
/// Completely removes all persisted shared stores for the current user.
+ (void)removeAllStores;
/// Completely removes all persisted shared stores for the given user.
/// \param user The user account associated with the store.
///
+ (void)removeAllStoresForUser:(SFUserAccount * _Nonnull)user;
/// Completely removes all persisted shared global stores.
+ (void)removeAllGlobalStores;
/// Returns whether the given store name is valid.
/// \param name name of the store.
///
+ (BOOL)isValidStoreName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Updates the value stored for the given key, or adds a new entry if the key does not exist.
/// \param value Value to add to the store.
///
/// \param key Key associated with the value.
///
///
/// returns:
/// True on success, false on failure.
- (BOOL)saveValue:(NSString * _Nonnull)value forKey:(NSString * _Nonnull)key;
/// Updates the data stored for the given key, or adds a new entry if the key does not exist.
/// \param data Data to add to the store.
///
/// \param key Key associated with the data.
///
///
/// returns:
/// True on success, false on failure.
- (BOOL)saveData:(NSData * _Nonnull)data forKey:(NSString * _Nonnull)key;
- (NSString * _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(NSString * _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
/// Accesses the data associated with the given key.
- (NSData * _Nullable)readDataWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
/// Removes entry for given key.
/// \param key The key associated with the entry to remove.
///
///
/// returns:
/// True if the entry is successfully removed or doesn’t exist, false otherwise.
- (BOOL)removeValueForKey:(NSString * _Nonnull)key;
/// Removes all contents of the store.
- (void)removeAll;
/// All keys in the store
///
/// returns:
/// all keys of stored values in a v2 store, nil if it’s a v1 store
- (NSArray<NSString *> * _Nullable)allKeys SWIFT_WARN_UNUSED_RESULT;
///
/// returns:
/// The number of entries in the store.
- (NSInteger)count SWIFT_WARN_UNUSED_RESULT;
///
/// returns:
/// A Boolean value that indicates whether the store is empty.
- (BOOL)isEmpty SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;

SWIFT_CLASS_NAMED("KeyValueEncryptedFileStoreViewController")
@interface SFSDKKeyValueEncryptedFileStoreViewController : NSObject
- (UIViewController * _Nonnull)createUI SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






SWIFT_CLASS_NAMED("ScreenLockManager")
@interface SFScreenLockManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SFScreenLockManager * _Nonnull shared;)
+ (SFScreenLockManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Locks the screen if necessary
- (void)handleAppForeground;
/// Stores the mobile policy for the user.
/// \param userAccount The user account
///
/// \param hasMobilePolicy Whether the user has a mobile policy
///
- (void)storeMobilePolicyWithUserAccount:(SFUserAccount * _Nonnull)userAccount hasMobilePolicy:(BOOL)hasMobilePolicy;
/// Stores the callback block to be run upon screen unlock
/// \param screenLockCallbackBlock The block to be run upon unlock
///
- (void)setCallbackBlockWithScreenLockCallbackBlock:(void (^ _Nonnull)(void))screenLockCallbackBlock;
/// Checks all users for Screen Lock policy and removes global policy if none are found.
- (void)checkForScreenLockUsers;
/// Upgrades from SFSecurityLockout to ScreenLockManager
- (void)upgradePasscode;
- (void)logoutScreenLockUsers;
- (BOOL)readMobilePolicy SWIFT_WARN_UNUSED_RESULT;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SALESFORCESDKCORE_SWIFT_H
#define SALESFORCESDKCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SalesforceSDKCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSData;
@class NSURL;
@class NSString;

SWIFT_CLASS_NAMED("DecryptStream")
@interface SFSDKDecryptStream : NSInputStream
@property (nonatomic, readonly) NSStreamStatus streamStatus;
@property (nonatomic, readonly) BOOL hasBytesAvailable;
- (nonnull instancetype)initWithData:(NSData * _Nonnull)data OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithURL:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithFileAtPath:(NSString * _Nonnull)path;
/// Setup for encryption. Always call this method before using this stream.
/// \param key Encryption key to use
///
- (void)setupEncryptionKey:(NSData * _Nonnull)key;
- (void)open;
- (NSInteger)read:(uint8_t * _Nonnull)buffer maxLength:(NSUInteger)len SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)propertyForKey:(NSStreamPropertyKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (BOOL)getBuffer:(uint8_t * _Nullable * _Nonnull)buffer length:(NSInteger * _Nonnull)len SWIFT_WARN_UNUSED_RESULT;
- (void)close;
@end


SWIFT_CLASS_NAMED("EncryptStream")
@interface SFSDKEncryptStream : NSOutputStream
@property (nonatomic, readonly) NSStreamStatus streamStatus;
@property (nonatomic, readonly) BOOL hasSpaceAvailable;
- (nonnull instancetype)initToMemory OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initToBuffer:(uint8_t * _Nonnull)buffer capacity:(NSUInteger)capacity OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithURL:(NSURL * _Nonnull)url append:(BOOL)shouldAppend OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initToFileAtPath:(NSString * _Nonnull)path append:(BOOL)shouldAppend;
/// Setup for encryption. Always call this method before using this stream.
/// \param key Encryption key to use
///
- (void)setupEncryptionKey:(NSData * _Nonnull)key;
- (id _Nullable)propertyForKey:(NSStreamPropertyKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)open;
- (NSInteger)write:(uint8_t const * _Nonnull)buffer maxLength:(NSUInteger)len SWIFT_WARN_UNUSED_RESULT;
- (void)close;
@end


SWIFT_CLASS_NAMED("Encryptor")
@interface SFSDKEncryptor : NSObject
/// Encrypts data with a given key
/// \param data Data to encrypt
///
/// \param key Data representation of symmetric key to encrypt with
///
///
/// returns:
/// Encrypted data
+ (NSData * _Nullable)encryptWithData:(NSData * _Nonnull)data using:(NSData * _Nonnull)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("", "encryptData:key:error:");
/// Encrypts data with a given key
/// \param data Data to encrypt
///
/// \param key Data representation of symmetric key to encrypt with
///
///
/// returns:
/// Encrypted data
+ (NSData * _Nullable)encryptData:(NSData * _Nonnull)data key:(NSData * _Nullable)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Decrypts data with a given key
/// \param data Data to decrypt
///
/// \param key Data representation of symmetric key to decrypt with
///
///
/// returns:
/// Decrypted data
+ (NSData * _Nullable)decryptWithData:(NSData * _Nonnull)data using:(NSData * _Nonnull)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("", "decryptData:key:error:");
/// Decrypts data with a given key
/// \param data Data to decrypt
///
/// \param key Data representation of symmetric key to decrypt with
///
///
/// returns:
/// Decrypted data
+ (NSData * _Nullable)decryptData:(NSData * _Nonnull)data key:(NSData * _Nullable)key error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("KeyGenerator")
@interface SFSDKKeyGenerator : NSObject
/// Returns an encryption key for the given label. If the key doesn’t already exist, it
/// will be created.
/// \param label Identifier for the key
///
///
/// returns:
/// Data representation of a symmetric encryption key
+ (NSData * _Nullable)encryptionKeyFor:(NSString * _Nonnull)label error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Remove the encryption key for the given label.
/// \param label Identifier for the key
///
///
/// returns:
/// If removal was successful or not
+ (BOOL)removeEncryptionKeyFor:(NSString * _Nonnull)label;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SFEncryptionKey;
@class SFUserAccount;

/// File-based key-value storage
SWIFT_CLASS_NAMED("KeyValueEncryptedFileStore")
@interface SFSDKKeyValueEncryptedFileStore : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nonnull storeDirectory;
@property (nonatomic, readonly, copy) NSString * _Nonnull storeName;
@property (nonatomic, readonly) NSInteger storeVersion;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger maxStoreNameLength;)
+ (NSInteger)maxStoreNameLength SWIFT_WARN_UNUSED_RESULT;
/// Creates a store.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
/// \param encryptionKey Encryption key for the store.
///
- (nullable instancetype)initWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name encryptionKey:(SFEncryptionKey * _Nonnull)encryptionKey SWIFT_DEPRECATED_MSG("", "initWithParentDirectory:name:");
/// Creates a store.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
- (nullable instancetype)initWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name;
/// Upgrades the encryption of a store created with SFEncryptionKey to a new key provided by Mobile SDK. Only use this if the store was originally created
/// by initializing KeyValueEncyptedFileStore directly rather than using the shared store methods.
/// \param parentDirectory Parent directory for the store.
///
/// \param name Name of the store.
///
/// \param legacyKey SFEncryptionKey store was originally created with.
///
+ (void)updateEncryptionWithParentDirectory:(NSString * _Nonnull)parentDirectory name:(NSString * _Nonnull)name legacyKey:(SFEncryptionKey * _Nonnull)legacyKey;
/// Returns a shared store instance with the given name for the current user.
/// \param name Name of the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedStoreWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Returns a shared store instance with the given name for the given user.
/// \param name Name of the store.
///
/// \param user The user account associated with the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedStoreWithName:(NSString * _Nonnull)name user:(SFUserAccount * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
/// Returns a shared global store instance with the given name. This store will not be specific to a particular user.
/// \param name Name of the store.
///
+ (SFSDKKeyValueEncryptedFileStore * _Nullable)sharedGlobalStoreWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// All of the store names from this app for the current user.
+ (NSArray<NSString *> * _Nonnull)allStoreNames SWIFT_WARN_UNUSED_RESULT;
/// All of the store names from this app for the given user.
/// \param user Associated user account.
///
+ (NSArray<NSString *> * _Nonnull)allStoreNamesForUser:(SFUserAccount * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
/// All of the global store names from this app.
+ (NSArray<NSString *> * _Nonnull)allGlobalStoreNames SWIFT_WARN_UNUSED_RESULT;
/// Completely removes a persisted shared store with the given name for the current user.
/// \param name Name of the store.
///
+ (void)removeSharedStoreWithName:(NSString * _Nonnull)name;
/// Completely removes a persisted shared store with the given name for the given user.
/// \param name Name of the store.
///
/// \param user The user account associated with the store.
///
+ (void)removeSharedStoreWithName:(NSString * _Nonnull)name forUser:(SFUserAccount * _Nonnull)user;
/// Completely removes a persisted shared global store with the given name.
/// \param name Name of the store.
///
+ (void)removeSharedGlobalStoreWithName:(NSString * _Nonnull)name;
/// Completely removes all persisted shared stores for the current user.
+ (void)removeAllStores;
/// Completely removes all persisted shared stores for the given user.
/// \param user The user account associated with the store.
///
+ (void)removeAllStoresForUser:(SFUserAccount * _Nonnull)user;
/// Completely removes all persisted shared global stores.
+ (void)removeAllGlobalStores;
/// Returns whether the given store name is valid.
/// \param name name of the store.
///
+ (BOOL)isValidStoreName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Updates the value stored for the given key, or adds a new entry if the key does not exist.
/// \param value Value to add to the store.
///
/// \param key Key associated with the value.
///
///
/// returns:
/// True on success, false on failure.
- (BOOL)saveValue:(NSString * _Nonnull)value forKey:(NSString * _Nonnull)key;
/// Updates the data stored for the given key, or adds a new entry if the key does not exist.
/// \param data Data to add to the store.
///
/// \param key Key associated with the data.
///
///
/// returns:
/// True on success, false on failure.
- (BOOL)saveData:(NSData * _Nonnull)data forKey:(NSString * _Nonnull)key;
- (NSString * _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(NSString * _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
/// Accesses the data associated with the given key.
- (NSData * _Nullable)readDataWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
/// Removes entry for given key.
/// \param key The key associated with the entry to remove.
///
///
/// returns:
/// True if the entry is successfully removed or doesn’t exist, false otherwise.
- (BOOL)removeValueForKey:(NSString * _Nonnull)key;
/// Removes all contents of the store.
- (void)removeAll;
/// All keys in the store
///
/// returns:
/// all keys of stored values in a v2 store, nil if it’s a v1 store
- (NSArray<NSString *> * _Nullable)allKeys SWIFT_WARN_UNUSED_RESULT;
///
/// returns:
/// The number of entries in the store.
- (NSInteger)count SWIFT_WARN_UNUSED_RESULT;
///
/// returns:
/// A Boolean value that indicates whether the store is empty.
- (BOOL)isEmpty SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;

SWIFT_CLASS_NAMED("KeyValueEncryptedFileStoreViewController")
@interface SFSDKKeyValueEncryptedFileStoreViewController : NSObject
- (UIViewController * _Nonnull)createUI SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






SWIFT_CLASS_NAMED("ScreenLockManager")
@interface SFScreenLockManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SFScreenLockManager * _Nonnull shared;)
+ (SFScreenLockManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Locks the screen if necessary
- (void)handleAppForeground;
/// Stores the mobile policy for the user.
/// \param userAccount The user account
///
/// \param hasMobilePolicy Whether the user has a mobile policy
///
- (void)storeMobilePolicyWithUserAccount:(SFUserAccount * _Nonnull)userAccount hasMobilePolicy:(BOOL)hasMobilePolicy;
/// Stores the callback block to be run upon screen unlock
/// \param screenLockCallbackBlock The block to be run upon unlock
///
- (void)setCallbackBlockWithScreenLockCallbackBlock:(void (^ _Nonnull)(void))screenLockCallbackBlock;
/// Checks all users for Screen Lock policy and removes global policy if none are found.
- (void)checkForScreenLockUsers;
/// Upgrades from SFSecurityLockout to ScreenLockManager
- (void)upgradePasscode;
- (void)logoutScreenLockUsers;
- (BOOL)readMobilePolicy SWIFT_WARN_UNUSED_RESULT;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
