//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024FEEC.hpp"
#include "fn_80251424.hpp"
#include "memset.hpp"



void fn_8024E918(PPC::Runtime::GCContext* context)
{
/*8024E918 0024B718*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024E91C 0024B71C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024E920 0024B720*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DD00 @ Get_MemoryOffset_HighBit);
/*8024E924 0024B724*/ PPC::Runtime::ASM::li(context->r4, 0x1c8);
/*8024E928 0024B728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024E92C 0024B72C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024E930 0024B730*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024E934 0024B734*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8055DD00 @ Get_MemoryOffset_LowBit);
/*8024E938 0024B738*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8024E93C 0024B73C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024E940 0024B740*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024E944 0024B744*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*8024E948 0024B748*/ PPC::Runtime::ASM::li(context->r4, 0x3a0);
/*8024E94C 0024B74C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024E950 0024B750*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024E954 0024B754*/ PPC::Runtime::ASM::bl(fn_8024FEEC);
/*8024E958 0024B758*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*8024E95C 0024B75C*/ PPC::Runtime::ASM::li(context->r4, 0x30);
/*8024E960 0024B760*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024E964 0024B764*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024E968 0024B768*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8024E96C 0024B76C*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*8024E970 0024B770*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024E974 0024B774*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024E978 0024B778*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*8024E97C 0024B77C*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*8024E980 0024B780*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024E984 0024B784*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024E988 0024B788*/ PPC::Runtime::ASM::bl(fn_80251424);
/*8024E98C 0024B78C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8024E990 0024B790*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8024E994 0024B794*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024E998 0024B798*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024E99C 0024B79C*/ PPC::Runtime::ASM::li(context->r5, 0x1c8);
/*8024E9A0 0024B7A0*/ PPC::Runtime::ASM::bl(memset);
/*8024E9A4 0024B7A4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8024E9A8 0024B7A8*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8024E9AC 0024B7AC*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*8024E9B0 0024B7B0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8024E9B4, 0x8024E9B4) //this is a jump label
/*8024E9B4 0024B7B4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024E9B8 0024B7B8*/ PPC::Runtime::ASM::addi(context->r5, context->r7, 0x8);
/*8024E9BC 0024B7BC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x54);
/*8024E9C0 0024B7C0*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*8024E9C4 0024B7C4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8024E9C8 0024B7C8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x10);
/*8024E9CC 0024B7CC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x20);
/*8024E9D0 0024B7D0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x30);
/*8024E9D4 0024B7D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8024E9D8 0024B7D8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8024E9DC 0024B7DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8024E9E0 0024B7E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*8024E9E4 0024B7E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8024E9E8 0024B7E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r5));
/*8024E9EC 0024B7EC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/*8024E9F0 0024B7F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r5));
/*8024E9F4 0024B7F4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r5));
/*8024E9F8 0024B7F8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r5));
/*8024E9FC 0024B7FC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*8024EA00 0024B800*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r5));
/*8024EA04 0024B804*/ PPC::Runtime::ASM::bdnz(.L_8024E9B4);
/*8024EA08 0024B808*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B6088 @ Get_MemoryOffset_HighBit);
/*8024EA0C 0024B80C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8024EA10 0024B810*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B6088 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8024EA14, 0x8024EA14) //this is a jump label
/*8024EA14 0024B814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8024EA18 0024B818*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8024EA1C 0024B81C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8024EA20 0024B820*/ PPC::Runtime::ASM::beq(.L_8024EA2C);
/*8024EA24 0024B824*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8024EA28 0024B828*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8024EA2C, 0x8024EA2C) //this is a jump label
/*8024EA2C 0024B82C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8024EA30 0024B830*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8024EA34 0024B834*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x45);
/*8024EA38 0024B838*/ PPC::Runtime::ASM::blt(.L_8024EA14);
/*8024EA3C 0024B83C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024EA40 0024B840*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024EA44 0024B844*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024EA48 0024B848*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024EA4C 0024B84C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024EA50 0024B850*/ PPC::Runtime::ASM::blr();
}