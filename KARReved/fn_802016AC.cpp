//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802016AC(PPC::Runtime::GCContext* context)
{
/*802016AC 001FE4AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802016B0 001FE4B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802016B4 001FE4B4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*802016B8 001FE4B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*802016BC 001FE4BC*/ PPC::Runtime::ASM::beq(.L_80201700);
/*802016C0 001FE4C0*/ PPC::Runtime::ASM::bge(.L_802016D4);
/*802016C4 001FE4C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802016C8 001FE4C8*/ PPC::Runtime::ASM::beq(.L_802016E0);
/*802016CC 001FE4CC*/ PPC::Runtime::ASM::bge(.L_802016F0);
/*802016D0 001FE4D0*/ PPC::Runtime::ASM::b(.L_8020171C);
RUNTIME_PPC_JUMP_LABEL(.L_802016D4, 0x802016D4) //this is a jump label
/*802016D4 001FE4D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*802016D8 001FE4D8*/ PPC::Runtime::ASM::bge(.L_8020171C);
/*802016DC 001FE4DC*/ PPC::Runtime::ASM::b(.L_80201710);
RUNTIME_PPC_JUMP_LABEL(.L_802016E0, 0x802016E0) //this is a jump label
/*802016E0 001FE4E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802016E4 001FE4E4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*802016E8 001FE4E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf0, context->r3));
/*802016EC 001FE4EC*/ PPC::Runtime::ASM::b(.L_8020171C);
RUNTIME_PPC_JUMP_LABEL(.L_802016F0, 0x802016F0) //this is a jump label
/*802016F0 001FE4F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802016F4 001FE4F4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*802016F8 001FE4F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf4, context->r3));
/*802016FC 001FE4FC*/ PPC::Runtime::ASM::b(.L_8020171C);
RUNTIME_PPC_JUMP_LABEL(.L_80201700, 0x80201700) //this is a jump label
/*80201700 001FE500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80201704 001FE504*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*80201708 001FE508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r3));
/*8020170C 001FE50C*/ PPC::Runtime::ASM::b(.L_8020171C);
RUNTIME_PPC_JUMP_LABEL(.L_80201710, 0x80201710) //this is a jump label
/*80201710 001FE510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80201714 001FE514*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*80201718 001FE518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xafc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8020171C, 0x8020171C) //this is a jump label
/*8020171C 001FE51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80201720 001FE520*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*80201724 001FE524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80201728 001FE528*/ PPC::Runtime::ASM::blr();
}