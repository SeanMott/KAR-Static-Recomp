//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SaveLoad_DidGameIDChange_TakeNoParam.hpp"
#include "fn_803BF73C.hpp"
#include "fn_803C1B10.hpp"



void fn___TRK_write_console(PPC::Runtime::GCContext* context)
{
/*803C2878 003BF678*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803C287C 003BF67C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2880 003BF680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C2884 003BF684*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C2888 003BF688*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*803C288C 003BF68C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C2890 003BF690*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803C2894 003BF694*/ PPC::Runtime::ASM::bl(fn_SaveLoad_DidGameIDChange_TakeNoParam);
/* 803C2898 003BF698  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803C289C 003BF69C*/ PPC::Runtime::ASM::bne(.L_803C28A8);
/*803C28A0 003BF6A0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C28A4 003BF6A4*/ PPC::Runtime::ASM::b(.L_803C291C);
RUNTIME_PPC_JUMP_LABEL(.L_803C28A8, 0x803C28A8) //this is a jump label
/*803C28A8 003BF6A8*/ PPC::Runtime::ASM::bl(fn_803BF73C);
/*803C28AC 003BF6AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C28B0 003BF6B0*/ PPC::Runtime::ASM::bne(.L_803C28BC);
/*803C28B4 003BF6B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C28B8 003BF6B8*/ PPC::Runtime::ASM::b(.L_803C291C);
RUNTIME_PPC_JUMP_LABEL(.L_803C28BC, 0x803C28BC) //this is a jump label
/*803C28BC 003BF6BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C28C0 003BF6C0*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803C28C4 003BF6C4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*803C28C8 003BF6C8*/ PPC::Runtime::ASM::li(context->r3, 0xd1);
/*803C28CC 003BF6CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C28D0 003BF6D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803C28D4 003BF6D4*/ PPC::Runtime::ASM::bl(fn_803C1B10);
/*803C28D8 003BF6D8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803C28DC 003BF6DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C28E0 003BF6E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803C28E4 003BF6E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C28E8 003BF6E8*/ PPC::Runtime::ASM::beq(.L_803C2918);
/*803C28EC 003BF6EC*/ PPC::Runtime::ASM::bge(.L_803C28FC);
/*803C28F0 003BF6F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C28F4 003BF6F4*/ PPC::Runtime::ASM::bge(.L_803C2908);
/*803C28F8 003BF6F8*/ PPC::Runtime::ASM::b(.L_803C2918);
RUNTIME_PPC_JUMP_LABEL(.L_803C28FC, 0x803C28FC) //this is a jump label
/*803C28FC 003BF6FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803C2900 003BF700*/ PPC::Runtime::ASM::bge(.L_803C2918);
/*803C2904 003BF704*/ PPC::Runtime::ASM::b(.L_803C2910);
RUNTIME_PPC_JUMP_LABEL(.L_803C2908, 0x803C2908) //this is a jump label
/*803C2908 003BF708*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C290C 003BF70C*/ PPC::Runtime::ASM::b(.L_803C291C);
RUNTIME_PPC_JUMP_LABEL(.L_803C2910, 0x803C2910) //this is a jump label
/*803C2910 003BF710*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*803C2914 003BF714*/ PPC::Runtime::ASM::b(.L_803C291C);
RUNTIME_PPC_JUMP_LABEL(.L_803C2918, 0x803C2918) //this is a jump label
/*803C2918 003BF718*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C291C, 0x803C291C) //this is a jump label
/*803C291C 003BF71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C2920 003BF720*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C2924 003BF724*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C2928 003BF728*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C292C 003BF72C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803C2930 003BF730*/ PPC::Runtime::ASM::blr();
}