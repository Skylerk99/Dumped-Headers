/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RemoteUITableHeader <NSObject>
@optional
-(void)setIconImage:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setImageAlignment:(int)arg1;
-(void)setDelegate:(id)arg1;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;

@required
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
-(id)initWithAttributes:(id)arg1;

@end

