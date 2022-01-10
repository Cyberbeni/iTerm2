//
//  VT100ScreenMutableState+Resizing.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 1/10/22.
//

#import "VT100ScreenMutableState.h"

@class iTermSelection;

NS_ASSUME_NONNULL_BEGIN

@interface VT100ScreenMutableState (Resizing)

#pragma mark - Private APIs (remove this once migration is done)

- (VT100GridSize)safeSizeForSize:(VT100GridSize)proposedSize;
- (BOOL)shouldSetSizeTo:(VT100GridSize)size;
- (void)sanityCheckIntervalsFrom:(VT100GridSize)oldSize note:(NSString *)note;
- (void)willSetSizeWithSelection:(iTermSelection *)selection;
- (int)appendScreen:(VT100Grid *)grid
       toScrollback:(LineBuffer *)lineBufferToUse
     withUsedHeight:(int)usedHeight
          newHeight:(int)newHeight;

@end

NS_ASSUME_NONNULL_END