/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPTextWrap
@required
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(BOOL*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;

@end

