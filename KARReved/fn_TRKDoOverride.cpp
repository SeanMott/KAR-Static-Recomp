//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_803C2388.hpp"
#include "fn___TRK_copy_vectors.hpp"



void fn_TRKDoOverride(PPC::Runtime::GCContext* context)
{
/*803BF5A4 003BC3A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*803BF5A8 003BC3A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BF5AC 003BC3AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BF5B0 003BC3B0*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BF5B4 003BC3B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803BF5B8 003BC3B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BF5BC 003BC3BC*/ PPC::Runtime::ASM::bl(memset);
/*803BF5C0 003BC3C0*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BF5C4 003BC3C4*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BF5C8 003BC3C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BF5CC 003BC3CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BF5D0 003BC3D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BF5D4 003BC3D4*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BF5D8 003BC3D8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BF5DC 003BC3DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BF5E0 003BC3E0*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BF5E4 003BC3E4*/ PPC::Runtime::ASM::bl(fn___TRK_copy_vectors);
/*803BF5E8 003BC3E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803BF5EC 003BC3EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BF5F0 003BC3F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BF5F4 003BC3F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*803BF5F8 003BC3F8*/ PPC::Runtime::ASM::blr();
}