//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7A64.hpp"
#include "fn_800FEAC4.hpp"
#include "fn_800FF480.hpp"



void fn_800D28DC(PPC::Runtime::GCContext* context)
{
/*800D28DC 000CF6DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D28E0 000CF6E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D28E4 000CF6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D28E8 000CF6E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D28EC 000CF6EC*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800D28F0 000CF6F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D28F4 000CF6F4*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800D28F8 000CF6F8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D28FC 000CF6FC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800D2900 000CF700*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*800D2904 000CF704*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2f);
/*800D2908 000CF708*/ PPC::Runtime::ASM::beq(.L_800D2950);
/*800D290C 000CF70C*/ PPC::Runtime::ASM::bge(.L_800D291C);
/*800D2910 000CF710*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2e);
/*800D2914 000CF714*/ PPC::Runtime::ASM::bge(.L_800D2928);
/*800D2918 000CF718*/ PPC::Runtime::ASM::b(.L_800D2950);
RUNTIME_PPC_JUMP_LABEL(.L_800D291C, 0x800D291C) //this is a jump label
/*800D291C 000CF71C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x31);
/*800D2920 000CF720*/ PPC::Runtime::ASM::bge(.L_800D2950);
/*800D2924 000CF724*/ PPC::Runtime::ASM::b(.L_800D293C);
RUNTIME_PPC_JUMP_LABEL(.L_800D2928, 0x800D2928) //this is a jump label
/*800D2928 000CF728*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800D292C 000CF72C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800D2930 000CF730*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800D2934 000CF734*/ PPC::Runtime::ASM::bl(fn_800FEAC4);
/*800D2938 000CF738*/ PPC::Runtime::ASM::b(.L_800D2960);
RUNTIME_PPC_JUMP_LABEL(.L_800D293C, 0x800D293C) //this is a jump label
/*800D293C 000CF73C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800D2940 000CF740*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800D2944 000CF744*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800D2948 000CF748*/ PPC::Runtime::ASM::bl(fn_800FF480);
/*800D294C 000CF74C*/ PPC::Runtime::ASM::b(.L_800D2960);
RUNTIME_PPC_JUMP_LABEL(.L_800D2950, 0x800D2950) //this is a jump label
/*800D2950 000CF750*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D2954 000CF754*/ PPC::Runtime::ASM::li(context->r4, 0x984);
/*800D2958 000CF758*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D295C 000CF75C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D2960, 0x800D2960) //this is a jump label
/*800D2960 000CF760*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D2964 000CF764*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D2968 000CF768*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D296C 000CF76C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2970 000CF770*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D2974 000CF774*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D2978 000CF778*/ PPC::Runtime::ASM::blr();
}