//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_JObjDeleteRObj(PPC::Runtime::GCContext* context)
{
/*8040BCFC 00408AFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040BD00 00408B00*/ PPC::Runtime::ASM::beqlr();
/*8040BD04 00408B04*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8040BD08 00408B08*/ PPC::Runtime::ASM::bne(.L_8040BD10);
/*8040BD0C 00408B0C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040BD10, 0x8040BD10) //this is a jump label
/*8040BD10 00408B10*/ PPC::Runtime::ASM::beqlr();
/*8040BD14 00408B14*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x80);
/*8040BD18 00408B18*/ PPC::Runtime::ASM::b(.L_8040BD3C);
RUNTIME_PPC_JUMP_LABEL(.L_8040BD1C, 0x8040BD1C) //this is a jump label
/*8040BD1C 00408B1C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8040BD20 00408B20*/ PPC::Runtime::ASM::bne(.L_8040BD38);
/*8040BD24 00408B24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8040BD28 00408B28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8040BD2C 00408B2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8040BD30 00408B30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8040BD34 00408B34*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040BD38, 0x8040BD38) //this is a jump label
/*8040BD38 00408B38*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8040BD3C, 0x8040BD3C) //this is a jump label
/*8040BD3C 00408B3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8040BD40 00408B40*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040BD44 00408B44*/ PPC::Runtime::ASM::bne(.L_8040BD1C);
/*8040BD48 00408B48*/ PPC::Runtime::ASM::blr();
}