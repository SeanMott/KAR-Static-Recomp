//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029A3D0(PPC::Runtime::GCContext* context)
{
/*8029A3D0 002971D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029A3D4 002971D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029A3D8 002971D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A3DC 002971DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A3E0 002971E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A3E4 002971E4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029A3E8 002971E8*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029A3EC 002971EC*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029A3F0 002971F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A3F4 002971F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A3F8 002971F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029A3FC 002971FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A400 00297200*/ PPC::Runtime::ASM::bctrl();
/*8029A404 00297204*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029A408 00297208*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A40C 0029720C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A410 00297210*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029A414 00297214*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A418 00297218*/ PPC::Runtime::ASM::bctrl();
/*8029A41C 0029721C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029A420 00297220*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029A424 00297224*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8029A428 00297228*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*8029A42C 0029722C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8029A430 00297230*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8029A434 00297234*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A438 00297238*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A43C 0029723C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A440 00297240*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029A444 00297244*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029A448 00297248*/ PPC::Runtime::ASM::blr();
}