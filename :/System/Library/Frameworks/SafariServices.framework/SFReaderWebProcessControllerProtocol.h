/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(id)arg1;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(BOOL)arg4;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)collectReaderContentForMail;
-(void)setReaderUserVisibleWidth:(double)arg1;
-(void)prepareReaderContentForPrinting;

@end

