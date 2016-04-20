/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLZipArchive, NSData, NSError, NSURL;

@interface QLZipArchiveEntry : NSObject {

	archive_entryRef _entry;
	QLZipArchive* _archive;
	NSData* _data;
	NSError* _error;
	NSURL* _url;

}

@property (assign,nonatomic) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (assign) archive_entryRef entry;              //@synthesize entry=_entry - In the implementation block
@property (assign) QLZipArchive * archive;              //@synthesize archive=_archive - In the implementation block
@property (assign) NSData * data;                       //@synthesize data=_data - In the implementation block
-(QLZipArchive *)archive;
-(id)readDataWithError:(id*)arg1 ;
-(void)setEntry:(archive_entryRef)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(archive_entryRef)entry;
-(void)setArchive:(QLZipArchive *)arg1 ;
@end

