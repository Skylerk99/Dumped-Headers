/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, NSArray;

@interface NSError : NSObject <NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (getter=isComparisonError,nonatomic,readonly) BOOL comparisonError; 
@property (getter=_mapkit_isCLDenied,nonatomic,readonly) BOOL _mapkit_CLDenied; 
@property (getter=_mapkit_isCLLocationUnknown,nonatomic,readonly) BOOL _mapkit_CLLocationUnknown; 
@property (getter=_mapkit_isCLHeadingFailure,nonatomic,readonly) BOOL _mapkit_CLHeadingFailure; 
@property (getter=_mapkit_isCLErrorNetwork,nonatomic,readonly) BOOL _mapkit_CLErrorNetwork; 
@property (nonatomic,retain,readonly) NSURL * _mapkit_locationErrorSettingsURL; 
@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(id)brc_errorMethodNotImplemented:(const char*)arg1 ;
+(id)brc_errorPermissionErrorAtURL:(id)arg1 ;
+(id)errorWithPOSIXCode:(int)arg1 ;
+(id)errorFromErrno;
+(id)errorWithPOSIXCode:(int)arg1 description:(id)arg2 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)brc_errorContainerNotFound:(id)arg1 ;
+(id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2 ;
+(id)brc_errorItemNotFound:(id)arg1 ;
+(id)brc_errorDocumentIsNotSharedAtURL:(id)arg1 ;
+(id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3 ;
+(id)brc_errorAccountMismatch;
+(id)brc_errorDaemonShouldBeLoggedOut;
+(id)brc_errorPathOutsideAnyCloudDocsContainerAtURL:(id)arg1 ;
+(id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2 ;
+(id)brc_errorOperationCancelled;
+(id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToContainer:(id)arg2 ;
+(id)brc_errorNoContainerForBundle:(id)arg1 ;
+(id)brc_errorNotInCloud:(id)arg1 ;
+(id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1 ;
+(id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3 ;
+(id)brc_errorDocumentIsNotShared;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3 ;
+(id)hk_error:(long long)arg1 description:(id)arg2 ;
+(id)hk_error:(long long)arg1 format:(id)arg2 ;
+(id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
+(id)ph_genericErrorWithLocalizedDescription:(id)arg1 ;
+(id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2 ;
+(id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2 ;
+(id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)_webUI_WebUIErrorWithCode:(unsigned long long)arg1 URL:(id)arg2 ;
+(id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)_ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(id)ax_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)ml_errorWithCode:(unsigned long long)arg1 description:(id)arg2 ;
+(id)ml_errorWithCode:(unsigned long long)arg1 ;
+(id)tl_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)APIParameterErrorFromErrorCode:(long long)arg1 ;
+(id)APILimitErrorFromErrorCode:(long long)arg1 ;
+(id)APIAuthorizationErrorFromErrorCode:(long long)arg1 ;
+(id)APIInternalServerErrorFromErrorCode:(long long)arg1 ;
+(id)APIUserErrorFromErrorCode:(long long)arg1 ;
+(id)APIFakeUserErrorFromErrorCode:(long long)arg1 ;
+(id)APIGenericErrorFromErrorCode:(long long)arg1 ;
+(id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2 ;
+(id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5 ;
+(id)errorWithCADResult:(int)arg1 ;
+(id)errorWithCADResult:(int)arg1 action:(id)arg2 ;
+(id)_defaultDescriptionForCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)errorWithPOSIXCode:(int)arg1 ;
+(id)errorFromErrno;
+(id)ak_errorWithCode:(long long)arg1 ;
+(id)ak_wrappedAnisetteError:(int)arg1 ;
+(id)mf_timeoutError;
+(id)mf_cancelledError;
+(id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(void)_registerWebKitErrors;
+(id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2 ;
+(void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5 ;
+(id)zilchDecoderErrorForNoSolution;
+(id)_geo_errorFromXPCData:(id)arg1 ;
+(id)genericErrorWithFile:(const char*)arg1 function:(const char*)arg2 lineNumber:(long long)arg3 ;
+(id)bs_timeoutError;
+(id)errorWithBTResult:(id)arg1 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)_registerBuiltInFormatters;
+(void)setUserInfoValueProviderForDomain:(id)arg1 provider:(/*^block*/id)arg2 ;
+(/*^block*/id)userInfoValueProviderForDomain:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isPOSIXErrorCode:(long long)arg1 ;
-(BOOL)br_isCloudDocsErrorCode:(long long)arg1 ;
-(BOOL)isCocoaErrorCode:(long long)arg1 ;
-(BOOL)isSecurityError;
-(BOOL)isConnectivityError;
-(BOOL)shouldPresentErrorForTaskType:(long long)arg1 ;
-(BOOL)isExpiredPasswordError;
-(BOOL)isPasswordMismatchError;
-(BOOL)isInvalidSubscriberError;
-(BOOL)isServerError;
-(BOOL)isEqualToError:(id)arg1 ;
-(BOOL)isStreamDomain:(long long)arg1 error:(int)arg2 ;
-(BOOL)isNewPasswordError;
-(BOOL)hk_isAuthorizationNotDeterminedError;
-(BOOL)hk_isInvalidArgumentError;
-(BOOL)hk_isInternalFailureError;
-(BOOL)hk_isDatabaseAccessibilityError;
-(void)hk_logWithDatabaseAccessibilityAtLogLevel:(int)arg1 format:(id)arg2 ;
-(void)hk_logWithoutDatabaseAccessibiityErrors:(id)arg1 ;
-(BOOL)hk_isHealthKitError;
-(BOOL)hk_isAuthorizationDeniedError;
-(BOOL)hk_isDeviceNotFoundError;
-(id)failingURL;
-(BOOL)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(long long)arg1 ;
-(BOOL)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1 ;
-(void)_safari_enumerateCloudKitErrorsWithBlock:(/*^block*/id)arg1 ;
-(id)errorBySettingFatalError:(BOOL)arg1 ;
-(BOOL)isFatalError;
-(BOOL)isEqual:(id)arg1 compareUserInfo:(BOOL)arg2 ;
-(id)ax_nonRedundantDescription;
-(id)tl_nonRedundantDescription;
-(id)encodeableError;
-(id)encodeableError;
-(id)encodeableError;
-(id)encodeableError;
-(BOOL)isCPLOperationCancelledError;
-(id)cplUnderlyingPOSIXError;
-(id)cplSafeErrorForXPC;
-(id)_cplSafeUserInfoForXPCDidChange:(BOOL*)arg1 ;
-(id)cplShortDomainDescription;
-(BOOL)isCPLErrorWithCode:(long long)arg1 ;
-(BOOL)isCPLError;
-(BOOL)MMCSIsAuthorizationError;
-(BOOL)MMCSIsNetworkConditionsError;
-(BOOL)MMCSIsFatalError;
-(void)_MMCSApplyBlock:(/*^block*/id)arg1 ;
-(int)MMCSErrorType;
-(BOOL)MMCSIsCancelError;
-(id)MMCSRetryAfterDate;
-(BOOL)MSIsTemporaryNetworkError;
-(BOOL)MSIsQuotaError;
-(BOOL)MSNeedsBackoff;
-(BOOL)MSIsCounted;
-(BOOL)MSCanBeIgnored;
-(BOOL)MSIsFatal;
-(BOOL)MSIsBadTokenError;
-(BOOL)MSIsAuthError;
-(id)MSMMCSRetryAfterDate;
-(BOOL)MSIsRegistrationError;
-(id)MSFindPrimaryError;
-(id)_MSVerboseDescriptionRecursionCount:(int)arg1 ;
-(void)_MSApplyBlock:(/*^block*/id)arg1 ;
-(BOOL)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(id)MSMakePrimaryError;
-(BOOL)MSASStateMachineIsCanceledError;
-(id)MSVerboseDescription;
-(BOOL)shouldDisplayToUser;
-(id)mf_shortDescription;
-(BOOL)mf_isUserCancelledError;
-(id)mf_moreInfo;
-(BOOL)mf_shouldBeReportedToUser;
-(BOOL)mf_shouldFailDownload;
-(BOOL)mf_isInaccessibleAccountCredentialError;
-(BOOL)mf_isMissingAccountCredentialError;
-(id)DAExtendedDescription;
-(id)CKClientSuitableError;
-(BOOL)CKIsNotFoundError;
-(BOOL)isComparisonError;
-(BOOL)isPOSIXErrorCode:(long long)arg1 ;
-(id)userReadableError;
-(BOOL)mf_isCancelledError;
-(BOOL)mf_isTimeoutError;
-(BOOL)_mapkit_isDirectionsError;
-(long long)_mapkit_underlyingGEOError;
-(long long)_mapkit_directionsErrorCode;
-(id)_mapkit_directionsErrorWithDetail:(SCD_Struct_NS19*)arg1 ;
-(id)_mapkit_error;
-(BOOL)_mapkit_isCLDenied;
-(NSURL *)_mapkit_locationErrorSettingsURL;
-(BOOL)_mapkit_isCLErrorNetwork;
-(BOOL)_mapkit_isCLHeadingFailure;
-(BOOL)_mapkit_isCLLocationUnknown;
-(id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5 ;
-(id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)MCVerboseDescription;
-(id)MCFindPrimaryError;
-(id)MCUSEnglishDescription;
-(id)MCUSEnglishSuggestion;
-(id)MCCopyAsPrimaryError;
-(BOOL)MCContainsErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)MCErrorType;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)_sanitizeObject:(id)arg1 ;
-(id)ac_secureCodingError;
-(id)zilchDecoderTileLoadingError;
-(id)_geo_newXPCData;
-(BOOL)bs_isCancelledError;
-(BOOL)bs_isTimeoutError;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(id)_web_failingURL;
-(id)_web_localizedDescription;
-(BOOL)_web_errorIsInDomain:(id)arg1 ;
-(id)_cocoaErrorString:(id)arg1 ;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
-(unsigned long long)_cfTypeID;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(NSString *)helpAnchor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)domain;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)localizedRecoverySuggestion;
-(NSArray *)localizedRecoveryOptions;
-(id)recoveryAttempter;
-(NSString *)localizedFailureReason;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(void)finalize;
@end

