//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193BD8.hpp"
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_8027A13C.hpp"
#include "fn_801A08AC.hpp"
#include "fn_801910E8.hpp"



void fn_801A1810(PPC::Runtime::GCContext* context)
{
/*801A1810 0019E610*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A1814 0019E614*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A1818 0019E618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A181C 0019E61C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A1820 0019E620*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A1824 0019E624*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r3));
/* 801A1828 0019E628  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*801A182C 0019E62C*/ PPC::Runtime::ASM::beq(.L_801A1844);
/*801A1830 0019E630*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A1834 0019E634*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 25, 25);
/*801A1838 0019E638*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*801A183C 0019E63C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801A1840 0019E640*/ PPC::Runtime::ASM::b(.L_801A1848);
RUNTIME_PPC_JUMP_LABEL(.L_801A1844, 0x801A1844) //this is a jump label
/*801A1844 0019E644*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1848, 0x801A1848) //this is a jump label
/*801A1848 0019E648*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801A184C 0019E64C*/ PPC::Runtime::ASM::beq(.L_801A1858);
/*801A1850 0019E650*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A1854 0019E654*/ PPC::Runtime::ASM::bl(fn_80193BD8);
RUNTIME_PPC_JUMP_LABEL(.L_801A1858, 0x801A1858) //this is a jump label
/*801A1858 0019E658*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A185C 0019E65C*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801A1860 0019E660*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A1864 0019E664*/ PPC::Runtime::ASM::beq(.L_801A18B8);
/*801A1868 0019E668*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r31));
/*801A186C 0019E66C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801A1870 0019E670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A1874 0019E674*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*801A1878 0019E678*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A187C 0019E67C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A1880 0019E680*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1260 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1884 0019E684*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A1888 0019E688*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*801A188C 0019E68C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A1890 0019E690*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801A1894 0019E694*/ PPC::Runtime::ASM::bne(.L_801A18A0);
/*801A1898 0019E698*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801A189C 0019E69C*/ PPC::Runtime::ASM::bl(fn_8027A13C);
RUNTIME_PPC_JUMP_LABEL(.L_801A18A0, 0x801A18A0) //this is a jump label
/*801A18A0 0019E6A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A18A4 0019E6A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A18A8 0019E6A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r31));
/*801A18AC 0019E6AC*/ PPC::Runtime::ASM::bl(fn_801A08AC);
/*801A18B0 0019E6B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A18B4 0019E6B4*/ PPC::Runtime::ASM::bl(fn_801910E8);
RUNTIME_PPC_JUMP_LABEL(.L_801A18B8, 0x801A18B8) //this is a jump label
/*801A18B8 0019E6B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A18BC 0019E6BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A18C0 0019E6C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A18C4 0019E6C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A18C8 0019E6C8*/ PPC::Runtime::ASM::blr();
}