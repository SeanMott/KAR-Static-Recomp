//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E9004(PPC::Runtime::GCContext* context)
{
/*802E9004 002E5E04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E9008 002E5E08*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E900C 002E5E0C*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*802E9010 002E5E10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E9014 002E5E14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802E9018 002E5E18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802E901C 002E5E1C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E9020 002E5E20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*802E9024 002E5E24*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*802E9028 002E5E28*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*802E902C 002E5E2C*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802E9030 002E5E30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802E9034 002E5E34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E9038 002E5E38*/ PPC::Runtime::ASM::bctrl();
/*802E903C 002E5E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E9040 002E5E40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E9044 002E5E44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E9048 002E5E48*/ PPC::Runtime::ASM::blr();
}