//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"



void fn_802202B0(PPC::Runtime::GCContext* context)
{
/*802202B0 0021D0B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802202B4 0021D0B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802202B8 0021D0B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802202BC 0021D0BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802202C0 0021D0C0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802202C4 0021D0C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802202C8 0021D0C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802202CC 0021D0CC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802202D0 0021D0D0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xd0);
/*802202D4 0021D0D4*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*802202D8 0021D0D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802202DC 0021D0DC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xd0);
/*802202E0 0021D0E0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe8);
/*802202E4 0021D0E4*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*802202E8 0021D0E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd0);
/*802202EC 0021D0EC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xe8);
/*802202F0 0021D0F0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*802202F4 0021D0F4*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*802202F8 0021D0F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802202FC 0021D0FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80220300 0021D100*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80220304 0021D104*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80220308 0021D108*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022030C 0021D10C*/ PPC::Runtime::ASM::blr();
}