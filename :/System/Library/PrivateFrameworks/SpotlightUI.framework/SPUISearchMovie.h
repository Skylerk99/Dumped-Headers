/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPMovie.h>

@class UIImage, NSURLSessionDataTask, SPUISearchMovieCell;

@interface SPUISearchMovie : SPMovie {

	UIImage* _posterImage;
	NSURLSessionDataTask* _dataTask;
	SPUISearchMovieCell* _cell;

}

@property (retain) UIImage * posterImage;                        //@synthesize posterImage=_posterImage - In the implementation block
@property (retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
@property (retain) SPUISearchMovieCell * cell;                   //@synthesize cell=_cell - In the implementation block
-(void)setPosterImage:(UIImage *)arg1 ;
-(UIImage *)posterImage;
-(SPUISearchMovieCell *)cell;
-(void)setCell:(SPUISearchMovieCell *)arg1 ;
-(void)loadPosterForCell:(id)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

