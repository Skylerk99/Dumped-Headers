/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {

	WebTextIteratorPrivate* _private;

}
+(id)dd_iteratorForDocument:(id)arg1 ;
-(BOOL)dd_checkCurrentRangeAgainstString:(CFStringRef)arg1 ;
-(id)dd_collectDDRangesForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 ;
-(_DDScanQuery*)dd_newQueryStopRange:(id*)arg1 ;
-(id)dd_doUrlificationForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(BOOL*)arg5 relevantResults:(id*)arg6 URLificationBlock:(/*^block*/id)arg7 ;
-(id)currentText;
-(id)currentNode;
-(BOOL)atEnd;
-(unsigned long long)currentTextLength;
-(const unsigned short*)currentTextPointer;
-(id)currentRange;
-(void)advance;
-(void)dealloc;
-(id)initWithRange:(id)arg1 ;
@end

