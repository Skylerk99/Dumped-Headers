/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/JODebox.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JODebox.dylib/GCDWebServerRequest.h>

@class GCDWebServerMIMEStreamParser, NSMutableArray, NSArray;

@interface GCDWebServerMultiPartFormRequest : GCDWebServerRequest {

	GCDWebServerMIMEStreamParser* _parser;
	NSMutableArray* _arguments;
	NSMutableArray* _files;

}

@property (nonatomic,readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,readonly) NSArray * files;                  //@synthesize files=_files - In the implementation block
+(id)mimeType;
-(id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5 ;
-(id)firstArgumentForControlName:(id)arg1 ;
-(id)firstFileForControlName:(id)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(id)description;
-(BOOL)close:(id*)arg1 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(NSArray *)arguments;
-(NSArray *)files;
@end

