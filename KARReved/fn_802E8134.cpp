//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E8134(PPC::Runtime::GCContext* context)
{
/*802E8134 002E4F34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E8138 002E4F38*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E813C 002E4F3C*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*802E8140 002E4F40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8144 002E4F44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802E8148 002E4F48*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802E814C 002E4F4C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E8150 002E4F50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*802E8154 002E4F54*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*802E8158 002E4F58*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*802E815C 002E4F5C*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802E8160 002E4F60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802E8164 002E4F64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8168 002E4F68*/ PPC::Runtime::ASM::bctrl();
/*802E816C 002E4F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8170 002E4F70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E8174 002E4F74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E8178 002E4F78*/ PPC::Runtime::ASM::blr();
}