/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSArray;

@interface CheckHashesOperation : ISOperation {

	long long _bytesToHash;
	NSString* _filePath;
	NSArray* _hashes;

}

@property (readonly) NSString * filePath; 
@property (readonly) NSArray * hashes; 
@property (readonly) long long numberOfBytesToHash; 
-(id)initWithFilePath:(id)arg1 hashes:(id)arg2 bytesToHash:(long long)arg3 ;
-(void)dealloc;
-(void)run;
-(NSString *)filePath;
-(long long)numberOfBytesToHash;
-(NSArray *)hashes;
@end

