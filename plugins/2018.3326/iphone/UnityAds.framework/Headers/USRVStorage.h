#ifdef UNITYADS_INTERNAL_SWIFT
#import <UnityAds/USRVJsonStorage.h>

typedef NS_ENUM (NSInteger, UnityServicesStorageType) {
    kUnityServicesStorageTypePublic  = 1,
    kUnityServicesStorageTypePrivate = 2,
    kUnityServicesStorageTypeMemory = 3
};

@interface USRVStorage : USRVJsonStorage

@property (nonatomic, strong) NSString *targetFileName;
@property (nonatomic, assign) UnityServicesStorageType type;

- (instancetype)initWithLocation: (NSString *)fileLocation type: (UnityServicesStorageType)type;
- (void)sendEvent: (NSString *)eventType values: (NSDictionary *)values;

// FILE HANDLING
- (void)        initStorage;
- (BOOL)        readStorage;
- (BOOL)        writeStorage;
- (BOOL)        storageFileExists;
- (BOOL)        clearStorage;
- (BOOL) saveToDisk;

@end
#endif
