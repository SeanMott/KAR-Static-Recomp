//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80061620.hpp"
#include "fn_80061620.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_menuGetNextMenuID.hpp"
#include "fn_800064F0.hpp"
#include "fn_80008220.hpp"



void fn_8004FA38(PPC::Runtime::GCContext* context)
{
/*8004FA38 0004C838*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004FA3C 0004C83C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004FA40 0004C840*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8004FA44 0004C844*/ PPC::Runtime::ASM::lis(context->r5, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004FA48 0004C848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004FA4C 0004C84C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x14);
/*8004FA50 0004C850*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8004FA54 0004C854*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004FA58 0004C858*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004FA5C 0004C85C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004FA60 0004C860*/ PPC::Runtime::ASM::bge(.L_8004FB18);
/*8004FA64 0004C864*/ PPC::Runtime::ASM::lis(context->r6, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8004FA68 0004C868*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8004FA6C 0004C86C*/ PPC::Runtime::ASM::addi(context->r11, context->r6, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8004FA70 0004C870*/ PPC::Runtime::ASM::mtctr(context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8004FA74, 0x8004FA74) //this is a jump label
/*8004FA74 0004C874*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r3, 24);
/*8004FA78 0004C878*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x1);
/*8004FA7C 0004C87C*/ PPC::Runtime::ASM::mulli(context->r9, context->r5, 0x44);
/*8004FA80 0004C880*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r6, 24);
/*8004FA84 0004C884*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x2);
/*8004FA88 0004C888*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r9);
/*8004FA8C 0004C88C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x3);
/*8004FA90 0004C890*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*8004FA94 0004C894*/ PPC::Runtime::ASM::mulli(context->r8, context->r8, 0x44);
/*8004FA98 0004C898*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r5, 24);
/*8004FA9C 0004C89C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r10));
/*8004FAA0 0004C8A0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r9);
/*8004FAA4 0004C8A4*/ PPC::Runtime::ASM::add(context->r9, context->r11, context->r8);
/*8004FAA8 0004C8A8*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x4);
/*8004FAAC 0004C8AC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8004FAB0 0004C8B0*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r6, 24);
/*8004FAB4 0004C8B4*/ PPC::Runtime::ASM::mulli(context->r7, context->r7, 0x44);
/*8004FAB8 0004C8B8*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 24);
/*8004FABC 0004C8BC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r8);
/*8004FAC0 0004C8C0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*8004FAC4 0004C8C4*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r10);
/*8004FAC8 0004C8C8*/ PPC::Runtime::ASM::add(context->r8, context->r11, context->r7);
/*8004FACC 0004C8CC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*8004FAD0 0004C8D0*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x44);
/*8004FAD4 0004C8D4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*8004FAD8 0004C8D8*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r9);
/*8004FADC 0004C8DC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r7);
/*8004FAE0 0004C8E0*/ PPC::Runtime::ASM::mulli(context->r6, context->r6, 0x44);
/*8004FAE4 0004C8E4*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r8);
/*8004FAE8 0004C8E8*/ PPC::Runtime::ASM::add(context->r5, context->r11, context->r5);
/*8004FAEC 0004C8EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5);
/*8004FAF0 0004C8F0*/ PPC::Runtime::ASM::add(context->r7, context->r11, context->r6);
/*8004FAF4 0004C8F4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8004FAF8 0004C8F8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*8004FAFC 0004C8FC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*8004FB00 0004C900*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8004FB04 0004C904*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8004FB08 0004C908*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r7);
/*8004FB0C 0004C90C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*8004FB10 0004C910*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r5);
/*8004FB14 0004C914*/ PPC::Runtime::ASM::bdnz(.L_8004FA74);
RUNTIME_PPC_JUMP_LABEL(.L_8004FB18, 0x8004FB18) //this is a jump label
/*8004FB18 0004C918*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8004FB1C 0004C91C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8004FB20 0004C920*/ PPC::Runtime::ASM::and.(context->r3, context->r4, context->r3);
/*8004FB24 0004C924*/ PPC::Runtime::ASM::beq(.L_8004FB50);
/*8004FB28 0004C928*/ PPC::Runtime::ASM::bl(fn_80061620);
/*8004FB2C 0004C92C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB30 0004C930*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004FB34 0004C934*/ PPC::Runtime::ASM::bne(.L_8004FB44);
/*8004FB38 0004C938*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8004FB3C 0004C93C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB40 0004C940*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FB44, 0x8004FB44) //this is a jump label
/*8004FB44 0004C944*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8004FB48 0004C948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB4C 0004C94C*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FB50, 0x8004FB50) //this is a jump label
/*8004FB50 0004C950*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*8004FB54 0004C954*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8004FB58 0004C958*/ PPC::Runtime::ASM::and.(context->r3, context->r4, context->r3);
/*8004FB5C 0004C95C*/ PPC::Runtime::ASM::beq(.L_8004FB88);
/*8004FB60 0004C960*/ PPC::Runtime::ASM::bl(fn_80061620);
/*8004FB64 0004C964*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB68 0004C968*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8004FB6C 0004C96C*/ PPC::Runtime::ASM::bne(.L_8004FB7C);
/*8004FB70 0004C970*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004FB74 0004C974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB78 0004C978*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FB7C, 0x8004FB7C) //this is a jump label
/*8004FB7C 0004C97C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8004FB80 0004C980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB84 0004C984*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FB88, 0x8004FB88) //this is a jump label
/*8004FB88 0004C988*/ PPC::Runtime::ASM::andi.(context->r3, context->r0, 0x1160);
/*8004FB8C 0004C98C*/ PPC::Runtime::ASM::beq(.L_8004FC10);
/*8004FB90 0004C990*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*8004FB94 0004C994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FB98 0004C998*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8004FB9C 0004C99C*/ PPC::Runtime::ASM::beq(.L_8004FBD0);
/*8004FBA0 0004C9A0*/ PPC::Runtime::ASM::bge(.L_8004FBB0);
/*8004FBA4 0004C9A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004FBA8 0004C9A8*/ PPC::Runtime::ASM::bge(.L_8004FBBC);
/*8004FBAC 0004C9AC*/ PPC::Runtime::ASM::b(.L_8004FBF8);
RUNTIME_PPC_JUMP_LABEL(.L_8004FBB0, 0x8004FBB0) //this is a jump label
/*8004FBB0 0004C9B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8004FBB4 0004C9B4*/ PPC::Runtime::ASM::bge(.L_8004FBF8);
/*8004FBB8 0004C9B8*/ PPC::Runtime::ASM::b(.L_8004FBE4);
RUNTIME_PPC_JUMP_LABEL(.L_8004FBBC, 0x8004FBBC) //this is a jump label
/*8004FBBC 0004C9BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004FBC0 0004C9C0*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8004FBC4 0004C9C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004FBC8 0004C9C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8004FBCC 0004C9CC*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FBD0, 0x8004FBD0) //this is a jump label
/*8004FBD0 0004C9D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004FBD4 0004C9D4*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8004FBD8 0004C9D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004FBDC 0004C9DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8004FBE0 0004C9E0*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FBE4, 0x8004FBE4) //this is a jump label
/*8004FBE4 0004C9E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004FBE8 0004C9E8*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8004FBEC 0004C9EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004FBF0 0004C9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8004FBF4 0004C9F4*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FBF8, 0x8004FBF8) //this is a jump label
/*8004FBF8 0004C9F8*/ PPC::Runtime::ASM::lis(context->r3, String_ "gmlanmenu." Get_MemoryOffset_HighBit);
/*8004FBFC 0004C9FC*/ PPC::Runtime::ASM::li(context->r4, 0x29d);
/*8004FC00 0004CA00*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "gmlanmenu." Get_MemoryOffset_LowBit);
/*8004FC04 0004CA04*/ PPC::Runtime::ASM::li(context->r5, lbl_805D51E0 @ Get_MemoryOffset_SDA21);
/*8004FC08 0004CA08*/ PPC::Runtime::ASM::bl(fn___assert);
/*8004FC0C 0004CA0C*/ PPC::Runtime::ASM::b(.L_8004FC34);
RUNTIME_PPC_JUMP_LABEL(.L_8004FC10, 0x8004FC10) //this is a jump label
/*8004FC10 0004CA10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*8004FC14 0004CA14*/ PPC::Runtime::ASM::beq(.L_8004FC34);
/*8004FC18 0004CA18*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*8004FC1C 0004CA1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004FC20 0004CA20*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8004FC24 0004CA24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8004FC28 0004CA28*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*8004FC2C 0004CA2C*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*8004FC30 0004CA30*/ PPC::Runtime::ASM::bl(fn_80008220);
RUNTIME_PPC_JUMP_LABEL(.L_8004FC34, 0x8004FC34) //this is a jump label
/*8004FC34 0004CA34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004FC38 0004CA38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004FC3C 0004CA3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004FC40 0004CA40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004FC44 0004CA44*/ PPC::Runtime::ASM::blr();
}