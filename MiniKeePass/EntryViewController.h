/*
 * Copyright 2011 Jason Rush and John Flanagan. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "TextFieldCell.h"
#import "TitleFieldCell.h"
#import "UrlFieldCell.h"
#import "TextViewCell.h"
#import "PasswordFieldCell.h"
#import "ImageButtonCell.h"
#import "ImagesViewController.h"
#import "KdbLib.h"
#import "MiniKeePassAppDelegate.h"
#import "PasswordGeneratorViewController.h"
#import "AutorotatingTableViewController.h"

@interface EntryViewController : AutorotatingTableViewController <UIGestureRecognizerDelegate, ImagesViewControllerDelegate, TextFieldCellDelegate, PasswordGeneratorDelegate> {
    MiniKeePassAppDelegate *appDelegate;
    TitleFieldCell *titleCell;
    ImageButtonCell *imageButtonCell;
    TextFieldCell *usernameCell;
    PasswordFieldCell *passwordCell;
    UrlFieldCell *urlCell;
    TextViewCell *commentsCell;
    
    NSUInteger selectedImageIndex;
    CGFloat originalHeight;
    BOOL canceled;
    
    KdbEntry *entry;
    BOOL isNewEntry;
}

@property (nonatomic, assign) NSUInteger selectedImageIndex;
@property (nonatomic, assign) KdbEntry *entry;
@property (nonatomic) BOOL isNewEntry;

- (BOOL)isDirty;

@end
