/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageReader : NSObject
-(void)_readAnnotationsFromDataProvider:(CGDataProviderRef)arg1 toController:(id)arg2 ;
-(id)_readDataFromTagAtPath:(id)arg1 inMetadata:(CGImageMetadataRef)arg2 ;
-(id)_readBaseImageFromDataProvider:(CGDataProviderRef)arg1 providerSource:(id)arg2 baseWasValid:(BOOL*)arg3 ;
-(void)readAnnotationsFromData:(id)arg1 toController:(id)arg2 ;
-(void)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2 ;
-(id)readBaseImageFromData:(id)arg1 baseWasValid:(BOOL*)arg2 ;
-(id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(BOOL*)arg2 ;
@end

