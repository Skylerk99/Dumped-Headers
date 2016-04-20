/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XPCService/XPCService-Structs.h>
#import <XPCService/XPCServiceArchiver.h>

@protocol OS_xpc_object;
@class NSBundle, NSString, NSDictionary, NSObject;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver> {

	NSBundle* _bundle;
	NSString* _serviceIdentifier;
	long long _serviceIdentifierPredicate;
	NSString* _executablePath;
	long long _executablePathPredicate;
	NSString* _realExecutablePath;
	long long _realExecutablePathPredicate;
	long long _serviceType;
	long long _serviceTypePredicate;
	NSDictionary* _serviceDictionary;
	long long _serviceDictionaryPredicate;
	NSDictionary* _launchdJobDictionary;
	long long _launchdJobDictionaryPredicate;
	NSObject*<OS_xpc_object> _xpcJobData;
	long long _xpcJobDataPredicate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCServiceBundleForMainExecutable;
+(id)XPCServiceBundleAtPath:(id)arg1 ;
+(BOOL)useRestrictiveRoleAccountSecurityPolicy;
+(launch_dataRef)createLaunchDataFromArray:(id)arg1 ;
+(id)createXPCJobsArrayFromArray:(id)arg1 ;
+(id)XPCServiceBundleFromExecutableAtPath:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)identifier;
-(id)executablePath;
-(id)bundle;
-(id)initWithBundle:(id)arg1 ;
-(long long)serviceType;
-(id)initWithArchive:(id)arg1 ;
-(id)serviceDictionary;
-(id)stringForServiceDictionaryKey:(id)arg1 ;
-(id)launchdJobDictionary;
-(id)realExecutablePath;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)objectForServiceDictionaryKey:(id)arg1 ;
-(id)launchdJobPropertyListData;
-(id)archiveForCache;
-(BOOL)boolForServiceDictionaryKey:(id)arg1 ;
-(id)dictionaryForServiceDictionaryKey:(id)arg1 ;
-(id)arrayForServiceDictionaryKey:(id)arg1 ;
-(BOOL)isSystemService;
-(id)launchdJobPropertyListString;
-(launch_dataRef)launchdJobLaunchData;
-(id)xpcJobData;
@end

