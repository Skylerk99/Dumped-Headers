/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class NSString;

@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {

	CFDictionaryRef mQuicklookProperties;
	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriScheme;
	CFStringRef mUuidStr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(BOOL)arg2 ;
-(BOOL)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)arg1 ;
-(id)initWithUriScheme:(CFStringRef)arg1 ;
-(CFDataRef)mainHtmlData;
-(CFDictionaryRef)quicklookDictionary;
-(void)dealloc;
-(id)init;
@end

