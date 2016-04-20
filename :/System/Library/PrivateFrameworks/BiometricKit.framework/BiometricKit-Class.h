/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol BiometricKitDelegate;
@class BiometricKitXPCClient, BiometricKitStatistics, UIImage, NSString;

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	int _enrollingMode;
	int _matchingMode;
	BiometricKitStatistics* _statistics;
	UIImage* _images[300];
	SCD_Struct_Bi1* _compSet;
	BOOL _showDebugImages;
	SCD_Struct_Bi3 _enrollImageSet;
	BOOL _isInternalInstall;
	BOOL _inUse;
	int _enrollProgressConfigRenderMode;
	id<BiometricKitDelegate> _delegate;
	CGSize _enrollProgressConfigRenderViewSize;

}

@property (assign,nonatomic) id<BiometricKitDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL inUse;                                                       //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) int enrollProgressConfigRenderMode;                     //@synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode - In the implementation block
@property (assign,nonatomic) CGSize enrollProgressConfigRenderViewSize;              //@synthesize enrollProgressConfigRenderViewSize=_enrollProgressConfigRenderViewSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringForProvisioningState:(int)arg1 ;
+(long long)getSensorPatchVersion;
+(void)preferencesSetBOOLValue:(BOOL)arg1 forKey:(const CFStringRef)arg2 ;
+(BOOL)preferencesGetBOOLValue:(const CFStringRef)arg1 ;
+(id)preferencesGetStringValue:(const CFStringRef)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<BiometricKitDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BiometricKitDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(void)templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(int)enroll:(int)arg1 withOptions:(id)arg2 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(id)getProtectedConfiguration;
-(int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2 ;
-(long long)getProvisioningState;
-(int)dropUnlockToken;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(int)resetAppleConnectCounter;
-(int)registerStoreToken:(id)arg1 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(id)getIdentitiesDatabaseUUID;
-(id)getIdentitiesDatabaseHash;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 ;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(long long)getSensorCalibrationStatus;
-(id)getCalibrationDataInfo;
-(id)getSensorInfo;
-(id)pullCalibrationData;
-(id)pullCaptureBuffer;
-(void)setDebugImages:(BOOL)arg1 ;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(id)imageFromRawImageData:(SCD_Struct_Bi7*)arg1 ;
-(id)imageFromBitmapData:(id)arg1 inRect:(CGRect)arg2 ;
-(void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 target:(SCD_Struct_Bi7*)arg3 ;
-(id)createMatchInfo:(id)arg1 withTopology:(const SCD_Struct_Bi11*)arg2 withMatchImage:(SCD_Struct_Bi7*)arg3 ;
-(void)enrollProgressMessage:(unsigned)arg1 ;
-(int)enroll:(int)arg1 withAuthToken:(id)arg2 ;
-(id)getMatchPolicyInfo;
-(int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2 ;
-(id)getTemplateInfo:(id)arg1 ;
-(int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(long long)getCalBlobVersion;
-(long long)getCalibrationDataState;
-(float)getModulationRatio;
-(id)pullDebugImage:(BOOL)arg1 rotated:(BOOL)arg2 ;
-(id)stringFromSensorConfiguration;
-(int)enrollProgressConfigRenderMode;
-(void)setEnrollProgressConfigRenderMode:(int)arg1 ;
-(CGSize)enrollProgressConfigRenderViewSize;
-(void)setEnrollProgressConfigRenderViewSize:(CGSize)arg1 ;
-(BOOL)isDelegate;
-(int)match:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(id)identities:(id)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(int)removeIdentity:(id)arg1 ;
-(int)updateIdentity:(id)arg1 ;
-(int)match:(id)arg1 withOptions:(id)arg2 ;
-(void)enrollResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)homeButtonPressed;
-(void)taskResumeStatus:(int)arg1 ;
-(int)detectFingerWithOptions:(id)arg1 ;
-(BOOL)isFingerOn;
-(long long)getBioLockoutState;
@end

