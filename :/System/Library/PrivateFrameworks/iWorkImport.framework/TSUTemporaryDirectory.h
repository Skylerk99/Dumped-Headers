/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(void)dealloc;
-(id)init;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
@end

