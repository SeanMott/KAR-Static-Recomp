//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802889EC.hpp"
#include "fn_8039A638.hpp"
#include "fn_802889EC.hpp"
#include "fn_802B042C.hpp"
#include "fn_8038CB28.hpp"
#include "fn_803A1F84.hpp"
#include "fn_802AFFD8.hpp"
#include "fn_802889EC.hpp"
#include "fn_8038CB28.hpp"
#include "fn_803A25D0.hpp"



void fn_803A1B1C(PPC::Runtime::GCContext* context)
{
/*803A1B1C 0039E91C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*803A1B20 0039E920*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A1B24 0039E924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803A1B28 0039E928*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803A1B2C 0039E92C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803A1B30 0039E930*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A1B34 0039E934*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A1B38 0039E938*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803A1B3C 0039E93C*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803A1B40 0039E940*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*803A1B44 0039E944*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*803A1B48 0039E948*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*803A1B4C 0039E94C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803A1B50 0039E950*/ PPC::Runtime::ASM::addi(context->r0, context->r7, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*803A1B54 0039E954*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*803A1B58 0039E958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A1B5C 0039E95C*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*803A1B60 0039E960*/ PPC::Runtime::ASM::lis(context->r11, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*803A1B64 0039E964*/ PPC::Runtime::ASM::lis(context->r10, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*803A1B68 0039E968*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803A1B6C 0039E96C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*803A1B70 0039E970*/ PPC::Runtime::ASM::lis(context->r9, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*803A1B74 0039E974*/ PPC::Runtime::ASM::lis(context->r8, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*803A1B78 0039E978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803A1B7C 0039E97C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6DFC @ Get_MemoryOffset_HighBit);
/*803A1B80 0039E980*/ PPC::Runtime::ASM::addi(context->r7, context->r3, lbl_804F6DFC @ Get_MemoryOffset_LowBit);
/*803A1B84 0039E984*/ PPC::Runtime::ASM::li(context->r0, lbl_805DC550 @ Get_MemoryOffset_SDA21);
/*803A1B88 0039E988*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803A1B8C 0039E98C*/ PPC::Runtime::ASM::addi(context->r11, context->r11, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*803A1B90 0039E990*/ PPC::Runtime::ASM::addi(context->r10, context->r10, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*803A1B94 0039E994*/ PPC::Runtime::ASM::addi(context->r25, context->r31, 0x30);
/*803A1B98 0039E998*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803A1B9C 0039E99C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*803A1BA0 0039E9A0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*803A1BA4 0039E9A4*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x10);
/*803A1BA8 0039E9A8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803A1BAC 0039E9AC*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*803A1BB0 0039E9B0*/ PPC::Runtime::ASM::fmr(context->f30, context->f2);
/*803A1BB4 0039E9B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A1BB8 0039E9B8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803A1BBC 0039E9BC*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*803A1BC0 0039E9C0*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*803A1BC4 0039E9C4*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*803A1BC8 0039E9C8*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*803A1BCC 0039E9CC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803A1BD0 0039E9D0*/ PPC::Runtime::ASM::sth(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*803A1BD4 0039E9D4*/ PPC::Runtime::ASM::sth(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31));
/*803A1BD8 0039E9D8*/ PPC::Runtime::ASM::sth(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*803A1BDC 0039E9DC*/ PPC::Runtime::ASM::sth(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*803A1BE0 0039E9E0*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803A1BE4 0039E9E4*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*803A1BE8 0039E9E8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803A1BEC 0039E9EC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*803A1BF0 0039E9F0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*803A1BF4 0039E9F4*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*803A1BF8 0039E9F8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*803A1BFC 0039E9FC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A1C00 0039EA00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803A1C04 0039EA04*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*803A1C08 0039EA08*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*803A1C0C 0039EA0C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*803A1C10 0039EA10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A1C14 0039EA14*/ PPC::Runtime::ASM::beq(.L_803A1C40);
/*803A1C18 0039EA18*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1C1C 0039EA1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1C20 0039EA20*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC520 @ Get_MemoryOffset_SDA21);
/*803A1C24 0039EA24*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC518 @ Get_MemoryOffset_SDA21);
/*803A1C28 0039EA28*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A1C2C 0039EA2C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A1C30 0039EA30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A1C34 0039EA34*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*803A1C38 0039EA38*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A1C3C 0039EA3C*/ PPC::Runtime::ASM::addi(context->r12, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803A1C40, 0x803A1C40) //this is a jump label
/*803A1C40 0039EA40*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803A1C44 0039EA44*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*803A1C48 0039EA48*/ PPC::Runtime::ASM::lis(context->r12, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*803A1C4C 0039EA4C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*803A1C50 0039EA50*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*803A1C54 0039EA54*/ PPC::Runtime::ASM::addi(context->r0, context->r12, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*803A1C58 0039EA58*/ PPC::Runtime::ASM::lis(context->r11, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*803A1C5C 0039EA5C*/ PPC::Runtime::ASM::lis(context->r10, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*803A1C60 0039EA60*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*803A1C64 0039EA64*/ PPC::Runtime::ASM::addi(context->r12, context->r11, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*803A1C68 0039EA68*/ PPC::Runtime::ASM::addi(context->r11, context->r10, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*803A1C6C 0039EA6C*/ PPC::Runtime::ASM::lis(context->r9, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*803A1C70 0039EA70*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803A1C74 0039EA74*/ PPC::Runtime::ASM::addi(context->r10, context->r9, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*803A1C78 0039EA78*/ PPC::Runtime::ASM::lis(context->r8, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*803A1C7C 0039EA7C*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x28);
/*803A1C80 0039EA80*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*803A1C84 0039EA84*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*803A1C88 0039EA88*/ PPC::Runtime::ASM::lis(context->r7, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*803A1C8C 0039EA8C*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*803A1C90 0039EA90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1C94 0039EA94*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*803A1C98 0039EA98*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*803A1C9C 0039EA9C*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*803A1CA0 0039EAA0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*803A1CA4 0039EAA4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*803A1CA8 0039EAA8*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*803A1CAC 0039EAAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5068 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1CB0 0039EAB0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803A1CB4 0039EAB4*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*803A1CB8 0039EAB8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*803A1CBC 0039EABC*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*803A1CC0 0039EAC0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A1CC4 0039EAC4*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*803A1CC8 0039EAC8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1CCC 0039EACC*/ PPC::Runtime::ASM::sth(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803A1CD0 0039EAD0*/ PPC::Runtime::ASM::sth(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e, context->r31));
/*803A1CD4 0039EAD4*/ PPC::Runtime::ASM::sth(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*803A1CD8 0039EAD8*/ PPC::Runtime::ASM::sth(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r31));
/*803A1CDC 0039EADC*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*803A1CE0 0039EAE0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*803A1CE4 0039EAE4*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1CE8 0039EAE8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*803A1CEC 0039EAEC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*803A1CF0 0039EAF0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*803A1CF4 0039EAF4*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*803A1CF8 0039EAF8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1CFC 0039EAFC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*803A1D00 0039EB00*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*803A1D04 0039EB04*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*803A1D08 0039EB08*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x89, context->r31));
/*803A1D0C 0039EB0C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a, context->r31));
/*803A1D10 0039EB10*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b, context->r31));
/*803A1D14 0039EB14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*803A1D18 0039EB18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*803A1D1C 0039EB1C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*803A1D20 0039EB20*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*803A1D24 0039EB24*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x89, context->r31));
/*803A1D28 0039EB28*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a, context->r31));
/*803A1D2C 0039EB2C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b, context->r31));
/*803A1D30 0039EB30*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*803A1D34 0039EB34*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1D38 0039EB38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*803A1D3C 0039EB3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1D40 0039EB40*/ PPC::Runtime::ASM::bctrl();
/*803A1D44 0039EB44*/ PPC::Runtime::ASM::addi(context->r25, context->r31, 0x98);
/*803A1D48 0039EB48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1D4C 0039EB4C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*803A1D50 0039EB50*/ PPC::Runtime::ASM::bl(fn_8039A638);
/*803A1D54 0039EB54*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F61C4 @ Get_MemoryOffset_HighBit);
/*803A1D58 0039EB58*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6CE4 @ Get_MemoryOffset_HighBit);
/*803A1D5C 0039EB5C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F61C4 @ Get_MemoryOffset_LowBit);
/*803A1D60 0039EB60*/ PPC::Runtime::ASM::addic.(context->r0, context->r3, lbl_804F6CE4 @ Get_MemoryOffset_LowBit);
/*803A1D64 0039EB64*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*803A1D68 0039EB68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A1D6C 0039EB6C*/ PPC::Runtime::ASM::beq(.L_803A1D9C);
/*803A1D70 0039EB70*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1D74 0039EB74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1D78 0039EB78*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC520 @ Get_MemoryOffset_SDA21);
/*803A1D7C 0039EB7C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC518 @ Get_MemoryOffset_SDA21);
/*803A1D80 0039EB80*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A1D84 0039EB84*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A1D88 0039EB88*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A1D8C 0039EB8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803A1D90 0039EB90*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A1D94 0039EB94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803A1D98 0039EB98*/ PPC::Runtime::ASM::b(.L_803A1DA0);
RUNTIME_PPC_JUMP_LABEL(.L_803A1D9C, 0x803A1D9C) //this is a jump label
/*803A1D9C 0039EB9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A1DA0, 0x803A1DA0) //this is a jump label
/*803A1DA0 0039EBA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r25));
/*803A1DA4 0039EBA4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803A1DA8 0039EBA8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*803A1DAC 0039EBAC*/ PPC::Runtime::ASM::bl(fn_802B042C);
/*803A1DB0 0039EBB0*/ PPC::Runtime::ASM::lis(context->r3, String_ "carve_whit" 2 @ Get_MemoryOffset_HighBit);
/*803A1DB4 0039EBB4*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E5070 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1DB8 0039EBB8*/ PPC::Runtime::ASM::addi(context->r26, context->r3, String_ "carve_whit" 2 @ Get_MemoryOffset_LowBit);
/*803A1DBC 0039EBBC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803A1DC0 0039EBC0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803A1DC4 0039EBC4*/ PPC::Runtime::ASM::b(.L_803A1E94);
RUNTIME_PPC_JUMP_LABEL(.L_803A1DC8, 0x803A1DC8) //this is a jump label
/*803A1DC8 0039EBC8*/ PPC::Runtime::ASM::li(context->r3, 0x88);
/*803A1DCC 0039EBCC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 803A1DD0 0039EBD0  7C 60 1B 79 */ mr. context->r0 , context->r3
/*803A1DD4 0039EBD4*/ PPC::Runtime::ASM::beq(.L_803A1DEC);
/*803A1DD8 0039EBD8*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*803A1DDC 0039EBDC*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803A1DE0 0039EBE0*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*803A1DE4 0039EBE4*/ PPC::Runtime::ASM::bl(fn_803A1F84);
/*803A1DE8 0039EBE8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803A1DEC, 0x803A1DEC) //this is a jump label
/*803A1DEC 0039EBEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A1DF0 0039EBF0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*803A1DF4 0039EBF4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*803A1DF8 0039EBF8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803A1DFC 0039EBFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*803A1E00 0039EC00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803A1E04 0039EC04*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803A1E08 0039EC08*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803A1E0C 0039EC0C*/ PPC::Runtime::ASM::bl(fn_802AFFD8);
/*803A1E10 0039EC10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803A1E14 0039EC14*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803A1E18 0039EC18*/ PPC::Runtime::ASM::lwzx(context->r25, context->r3, context->r30);
/*803A1E1C 0039EC1C*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A1E20 0039EC20*/ PPC::Runtime::ASM::beq(.L_803A1E50);
/*803A1E24 0039EC24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1E28 0039EC28*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1E2C 0039EC2C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC520 @ Get_MemoryOffset_SDA21);
/*803A1E30 0039EC30*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC518 @ Get_MemoryOffset_SDA21);
/*803A1E34 0039EC34*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A1E38 0039EC38*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A1E3C 0039EC3C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A1E40 0039EC40*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803A1E44 0039EC44*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A1E48 0039EC48*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803A1E4C 0039EC4C*/ PPC::Runtime::ASM::b(.L_803A1E54);
RUNTIME_PPC_JUMP_LABEL(.L_803A1E50, 0x803A1E50) //this is a jump label
/*803A1E50 0039EC50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A1E54, 0x803A1E54) //this is a jump label
/*803A1E54 0039EC54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r25));
/*803A1E58 0039EC58*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803A1E5C 0039EC5C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803A1E60 0039EC60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803A1E64 0039EC64*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r30);
/*803A1E68 0039EC68*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*803A1E6C 0039EC6C*/ PPC::Runtime::ASM::beq(.L_803A1E74);
/*803A1E70 0039EC70*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803A1E74, 0x803A1E74) //this is a jump label
/*803A1E74 0039EC74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*803A1E78 0039EC78*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r30);
/*803A1E7C 0039EC7C*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803A1E80 0039EC80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A1E84 0039EC84*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1E88 0039EC88*/ PPC::Runtime::ASM::bctrl();
/*803A1E8C 0039EC8C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*803A1E90 0039EC90*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803A1E94, 0x803A1E94) //this is a jump label
/*803A1E94 0039EC94*/ PPC::Runtime::ASM::cmplw(context->r29, context->r28);
/*803A1E98 0039EC98*/ PPC::Runtime::ASM::blt(.L_803A1DC8);
/*803A1E9C 0039EC9C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803A1EA0 0039ECA0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803A1EA4 0039ECA4*/ PPC::Runtime::ASM::beq(.L_803A1EAC);
/*803A1EA8 0039ECA8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803A1EAC, 0x803A1EAC) //this is a jump label
/*803A1EAC 0039ECAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*803A1EB0 0039ECB0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*803A1EB4 0039ECB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A1EB8 0039ECB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1EBC 0039ECBC*/ PPC::Runtime::ASM::bctrl();
/*803A1EC0 0039ECC0*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*803A1EC4 0039ECC4*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 803A1EC8 0039ECC8  7C 64 1B 79 */ mr. context->r4 , context->r3
/*803A1ECC 0039ECCC*/ PPC::Runtime::ASM::beq(.L_803A1EE4);
/*803A1ED0 0039ECD0*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*803A1ED4 0039ECD4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803A1ED8 0039ECD8*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*803A1EDC 0039ECDC*/ PPC::Runtime::ASM::bl(fn_803A25D0);
/*803A1EE0 0039ECE0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803A1EE4, 0x803A1EE4) //this is a jump label
/*803A1EE4 0039ECE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*803A1EE8 0039ECE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803A1EEC 0039ECEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1EF0 0039ECF0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*803A1EF4 0039ECF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1EF8 0039ECF8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A1EFC 0039ECFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A1F00 0039ED00*/ PPC::Runtime::ASM::beq(.L_803A1F28);
/*803A1F04 0039ED04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A1F08 0039ED08*/ PPC::Runtime::ASM::beq(.L_803A1F20);
/*803A1F0C 0039ED0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A1F10 0039ED10*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803A1F14 0039ED14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803A1F18 0039ED18*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1F1C 0039ED1C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A1F20, 0x803A1F20) //this is a jump label
/*803A1F20 0039ED20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A1F24 0039ED24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803A1F28, 0x803A1F28) //this is a jump label
/*803A1F28 0039ED28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1F2C 0039ED2C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A1F30 0039ED30*/ PPC::Runtime::ASM::beq(.L_803A1F48);
/*803A1F34 0039ED34*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A1F38 0039ED38*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803A1F3C 0039ED3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803A1F40 0039ED40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1F44 0039ED44*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A1F48, 0x803A1F48) //this is a jump label
/*803A1F48 0039ED48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*803A1F4C 0039ED4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A1F50 0039ED50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*803A1F54 0039ED54*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803A1F58 0039ED58*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803A1F5C 0039ED5C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A1F60 0039ED60*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A1F64 0039ED64*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803A1F68 0039ED68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*803A1F6C 0039ED6C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803A1F70 0039ED70*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*803A1F74 0039ED74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803A1F78 0039ED78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A1F7C 0039ED7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*803A1F80 0039ED80*/ PPC::Runtime::ASM::blr();
}