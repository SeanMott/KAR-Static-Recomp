//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80276650.hpp"
#include "fn_80276118.hpp"
#include "fn_80276050.hpp"



void fn_8026C0A0(PPC::Runtime::GCContext* context)
{
/*8026C0A0 00268EA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8026C0A4 00268EA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026C0A8 00268EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026C0AC 00268EAC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8026C0B0 00268EB0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8026C0B4 00268EB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026C0B8 00268EB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8026C0BC 00268EBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r3));
/*8026C0C0 00268EC0*/ PPC::Runtime::ASM::bl(fn_80276650);
/*8026C0C4 00268EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026C0C8 00268EC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026C0CC 00268ECC*/ PPC::Runtime::ASM::li(context->r4, 0xc0);
/*8026C0D0 00268ED0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8026C0D4 00268ED4*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*8026C0D8 00268ED8*/ PPC::Runtime::ASM::bl(fn_80276118);
/*8026C0DC 00268EDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026C0E0 00268EE0*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*8026C0E4 00268EE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8026C0E8 00268EE8*/ PPC::Runtime::ASM::bl(fn_80276050);
/*8026C0EC 00268EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026C0F0 00268EF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026C0F4 00268EF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026C0F8 00268EF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8026C0FC 00268EFC*/ PPC::Runtime::ASM::blr();
}