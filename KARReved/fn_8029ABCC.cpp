//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029ABCC(PPC::Runtime::GCContext* context)
{
/*8029ABCC 002979CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029ABD0 002979D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029ABD4 002979D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029ABD8 002979D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029ABDC 002979DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029ABE0 002979E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029ABE4 002979E4*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029ABE8 002979E8*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029ABEC 002979EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029ABF0 002979F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029ABF4 002979F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029ABF8 002979F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029ABFC 002979FC*/ PPC::Runtime::ASM::bctrl();
/*8029AC00 00297A00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029AC04 00297A04*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AC08 00297A08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AC0C 00297A0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029AC10 00297A10*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AC14 00297A14*/ PPC::Runtime::ASM::bctrl();
/*8029AC18 00297A18*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029AC1C 00297A1C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029AC20 00297A20*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8029AC24 00297A24*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8029AC28 00297A28*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8029AC2C 00297A2C*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8029AC30 00297A30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AC34 00297A34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AC38 00297A38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AC3C 00297A3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029AC40 00297A40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029AC44 00297A44*/ PPC::Runtime::ASM::blr();
}