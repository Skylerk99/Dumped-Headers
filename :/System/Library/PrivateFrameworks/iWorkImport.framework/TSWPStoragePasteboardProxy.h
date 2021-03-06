/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {

	TSWPStorage* _storage;
	NSRange _range;
	id<TSWPStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) NSRange storageRange;              //@synthesize range=_range - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 range:(NSRange)arg3 styleProvider:(id)arg4 ;
-(NSRange)storageRange;
-(void)dealloc;
@end

