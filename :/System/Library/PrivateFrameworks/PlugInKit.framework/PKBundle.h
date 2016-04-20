/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSURL, NSDictionary;

@interface PKBundle : NSObject {

	NSString* _supportPath;
	NSObject*<OS_xpc_object> __bundle;

}

@property (retain) NSObject*<OS_xpc_object> _bundle;              //@synthesize _bundle=__bundle - In the implementation block
@property (readonly) NSURL * url; 
@property (readonly) NSString * path; 
@property (readonly) NSDictionary * infoDictionary; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * supportPath;                      //@synthesize supportPath=_supportPath - In the implementation block
@property (readonly) NSString * executablePath; 
@property (readonly) NSString * plugInsPath; 
-(NSDictionary *)infoDictionary;
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(NSString *)path;
-(NSString *)executablePath;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_xpc_object>)_bundle;
-(id)initWithXPCBundle:(id)arg1 ;
-(id)initWithExecutablePath:(id)arg1 ;
-(void)set_bundle:(NSObject*<OS_xpc_object>)arg1 ;
-(id)stringProperty:(int)arg1 ;
-(NSString *)supportPath;
-(id)bundleDirectory:(id)arg1 ;
-(id)initForMainBundle;
-(id)initWithExecutableURL:(id)arg1 ;
-(NSString *)plugInsPath;
@end

