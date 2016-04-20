/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol SFPersonCollectionViewCellDelegate;
@class SFAirDropNode, NSProgress, NSString, NSObject, UILabel, SFPersonImageView, SFCircleProgressView, NSArray, UIColor;

@interface SFPersonCollectionViewCell : UICollectionViewCell {

	BOOL _darkStyleOnLegacyApp;
	BOOL _stateBeingRestored;
	SFAirDropNode* _person;
	NSProgress* _progress;
	long long _cellState;
	NSString* _sessionID;
	NSObject*<SFPersonCollectionViewCellDelegate> _delegate;
	UILabel* _nameLabel;
	SFPersonImageView* _imageView;
	SFCircleProgressView* _circleProgressView;
	id _progressToken;
	NSArray* _progressKeyPaths;
	UILabel* _secondLabel;
	NSArray* _secondLabelVisibleConstraintsArray;
	UIColor* _fadedSecondLabelColor;

}

@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                  //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (nonatomic,retain) SFAirDropNode * person;                                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long cellState;                                                        //@synthesize cellState=_cellState - In the implementation block
@property (assign,nonatomic) BOOL stateBeingRestored;                                                    //@synthesize stateBeingRestored=_stateBeingRestored - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SFPersonCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) SFPersonImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SFCircleProgressView * circleProgressView;                                  //@synthesize circleProgressView=_circleProgressView - In the implementation block
@property (nonatomic,retain) id progressToken;                                                           //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,retain) NSArray * progressKeyPaths;                                                 //@synthesize progressKeyPaths=_progressKeyPaths - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                                                      //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) NSArray * secondLabelVisibleConstraintsArray;                               //@synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray - In the implementation block
@property (nonatomic,retain) UIColor * fadedSecondLabelColor;                                            //@synthesize fadedSecondLabelColor=_fadedSecondLabelColor - In the implementation block
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)userDidCancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<SFPersonCollectionViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSObject*<SFPersonCollectionViewCellDelegate>)delegate;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(SFPersonImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)setImageView:(SFPersonImageView *)arg1 ;
-(void)setPerson:(SFAirDropNode *)arg1 ;
-(SFAirDropNode *)person;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setCircleProgressView:(SFCircleProgressView *)arg1 ;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(void)setSecondLabelVisibleConstraintsArray:(NSArray *)arg1 ;
-(void)setFadedSecondLabelColor:(UIColor *)arg1 ;
-(UILabel *)secondLabel;
-(void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)updatePersonIconView;
-(void)updateNameLabel;
-(void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)setCellState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(UIColor *)fadedSecondLabelColor;
-(SFCircleProgressView *)circleProgressView;
-(NSArray *)secondLabelVisibleConstraintsArray;
-(void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2 ;
-(void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2 ;
-(void)restoreCellStateFromFinalTransferState:(long long)arg1 ;
-(void)userDidSelect;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(NSArray *)progressKeyPaths;
-(void)setProgressKeyPaths:(NSArray *)arg1 ;
-(void)setCellState:(long long)arg1 ;
-(long long)cellState;
@end

