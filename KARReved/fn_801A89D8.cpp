//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193F98.hpp"
#include "fn_801950DC.hpp"
#include "fn_801C76C8.hpp"
#include "fn_8019DF88.hpp"



void fn_801A89D8(PPC::Runtime::GCContext* context)
{
/*801A89D8 001A57D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A89DC 001A57DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A89E0 001A57E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A89E4 001A57E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A89E8 001A57E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A89EC 001A57EC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801A89F0 001A57F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A89F4 001A57F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801A89F8 001A57F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801A89FC 001A57FC*/ PPC::Runtime::ASM::bl(fn_80193F98);
/*801A8A00 001A5800*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801A8A04 001A5804*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A8A08 001A5808*/ PPC::Runtime::ASM::bl(fn_801950DC);
/*801A8A0C 001A580C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A8A10 001A5810*/ PPC::Runtime::ASM::bne(.L_801A8A24);
/*801A8A14 001A5814*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*801A8A18 001A5818*/ PPC::Runtime::ASM::bne(.L_801A8A24);
/*801A8A1C 001A581C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A8A20 001A5820*/ PPC::Runtime::ASM::bl(fn_801C76C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A8A24, 0x801A8A24) //this is a jump label
/*801A8A24 001A5824*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*801A8A28 001A5828*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A8A2C 001A582C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*801A8A30 001A5830*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801A8A34 001A5834*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b4, context->r29));
/*801A8A38 001A5838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b8, context->r29));
/*801A8A3C 001A583C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*801A8A40 001A5840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9bc, context->r29));
/*801A8A44 001A5844*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r29));
/*801A8A48 001A5848*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A8A4C 001A584C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r29));
/*801A8A50 001A5850*/ PPC::Runtime::ASM::bl(fn_8019DF88);
/*801A8A54 001A5854*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r29));
/*801A8A58 001A5858*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*801A8A5C 001A585C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r29));
/*801A8A60 001A5860*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A8A64 001A5864*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A8A68 001A5868*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8A6C 001A586C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A8A70 001A5870*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A8A74 001A5874*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A8A78 001A5878*/ PPC::Runtime::ASM::blr();
}