//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80184FE0(PPC::Runtime::GCContext* context)
{
/*80184FE0 00181DE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80184FE4 00181DE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80184FE8 00181DE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184FEC 00181DEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80184FF0 00181DF0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80184FF4 00181DF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1188, context->r3));
/*80184FF8 00181DF8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80184FFC 00181DFC*/ PPC::Runtime::ASM::beq(.L_80185018);
/*80185000 00181E00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80185004 00181E04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0EB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80185008 00181E08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8018500C 00181E0C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80185010 00181E10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80185014 00181E14*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80185018, 0x80185018) //this is a jump label
/*80185018 00181E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018501C 00181E1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80185020 00181E20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185024 00181E24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80185028 00181E28*/ PPC::Runtime::ASM::blr();
}