/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant {

	TSPPasteboard* _pasteboard;
	BOOL _didAttemptToCopy;

}
-(void)copyToPasteboardIsSmartCopy:(BOOL)arg1 ;
-(id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)copyToPasteboard;
-(void)loadData;
@end

