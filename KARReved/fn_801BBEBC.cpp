//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"
#include "fn_801BBFC8.hpp"



void fn_801BBEBC(PPC::Runtime::GCContext* context)
{
/*801BBEBC 001B8CBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801BBEC0 001B8CC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BBEC4 001B8CC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E17B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBEC8 001B8CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801BBECC 001B8CCC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBED0 001B8CD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801BBED4 001B8CD4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BBED8 001B8CD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa54, context->r3));
/*801BBEDC 001B8CDC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801BBEE0 001B8CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa58, context->r31));
/*801BBEE4 001B8CE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801BBEE8 001B8CE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801BBEEC 001B8CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r31));
/*801BBEF0 001B8CF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801BBEF4 001B8CF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6c, context->r31));
/*801BBEF8 001B8CF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r31));
/*801BBEFC 001B8CFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801BBF00 001B8D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801BBF04 001B8D04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa74, context->r31));
/*801BBF08 001B8D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801BBF0C 001B8D0C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801BBF10 001B8D10*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BBF14 001B8D14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801BBF18 001B8D18*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801BBF1C 001B8D1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBF20 001B8D20*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801BBF24 001B8D24*/ PPC::Runtime::ASM::beq(.L_801BBFB0);
/*801BBF28 001B8D28*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801BBF2C 001B8D2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801BBF30 001B8D30*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801BBF34 001B8D34*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801BBF38 001B8D38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801BBF3C 001B8D3C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801BBF40 001B8D40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBF44 001B8D44*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801BBF48 001B8D48*/ PPC::Runtime::ASM::beq(.L_801BBFB0);
/*801BBF4C 001B8D4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBF50 001B8D50*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801BBF54 001B8D54*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801BBF58 001B8D58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801BBF5C 001B8D5C*/ PPC::Runtime::ASM::fdivs(context->f3, context->f0, context->f1);
/*801BBF60 001B8D60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BBF64 001B8D64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BBF68 001B8D68*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*801BBF6C 001B8D6C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*801BBF70 001B8D70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*801BBF74 001B8D74*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801BBF78 001B8D78*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BBF7C 001B8D7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BBF80 001B8D80*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801BBF84 001B8D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801BBF88 001B8D88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E17C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBF8C 001B8D8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r3));
/*801BBF90 001B8D90*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801BBF94 001B8D94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801BBF98 001B8D98*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801BBF9C 001B8D9C*/ PPC::Runtime::ASM::bne(.L_801BBFB0);
/*801BBFA0 001B8DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BBFA4 001B8DA4*/ PPC::Runtime::ASM::bl(fn_801BBFC8);
/*801BBFA8 001B8DA8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BBFAC 001B8DAC*/ PPC::Runtime::ASM::b(.L_801BBFB4);
RUNTIME_PPC_JUMP_LABEL(.L_801BBFB0, 0x801BBFB0) //this is a jump label
/*801BBFB0 001B8DB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BBFB4, 0x801BBFB4) //this is a jump label
/*801BBFB4 001B8DB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801BBFB8 001B8DB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801BBFBC 001B8DBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BBFC0 001B8DC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801BBFC4 001B8DC4*/ PPC::Runtime::ASM::blr();
}