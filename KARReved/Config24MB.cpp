//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void Config24MB(PPC::Runtime::GCContext* context)
{
/*803D7BF0 003D49F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D7BF4 003D49F4*/ PPC::Runtime::ASM::lis(context->r4, 0x0);
/*803D7BF8 003D49F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*803D7BFC 003D49FC*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803D7C00 003D4A00*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1ff);
/*803D7C04 003D4A04*/ PPC::Runtime::ASM::lis(context->r6, 0x100);
/*803D7C08 003D4A08*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*803D7C0C 003D4A0C*/ PPC::Runtime::ASM::lis(context->r5, 0x8100);
/*803D7C10 003D4A10*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xff);
/*803D7C14 003D4A14*/ PPC::Runtime::ASM::isync();
/* 803D7C18 003D4A18  7C F8 83 A6 */ mtdbatu 0 , context->r7
/* 803D7C1C 003D4A1C  7C 99 83 A6 */ mtdbatl 0 , context->r4
/* 803D7C20 003D4A20  7C 78 83 A6 */ mtdbatu 0 , context->r3
/*803D7C24 003D4A24*/ PPC::Runtime::ASM::isync();
/* 803D7C28 003D4A28  7C F0 83 A6 */ mtibatu 0 , context->r7
/* 803D7C2C 003D4A2C  7C 91 83 A6 */ mtibatl 0 , context->r4
/* 803D7C30 003D4A30  7C 70 83 A6 */ mtibatu 0 , context->r3
/*803D7C34 003D4A34*/ PPC::Runtime::ASM::isync();
/* 803D7C38 003D4A38  7C FC 83 A6 */ mtdbatu 2 , context->r7
/* 803D7C3C 003D4A3C  7C DD 83 A6 */ mtdbatl 2 , context->r6
/* 803D7C40 003D4A40  7C BC 83 A6 */ mtdbatu 2 , context->r5
/*803D7C44 003D4A44*/ PPC::Runtime::ASM::isync();
/* 803D7C48 003D4A48  7C F4 83 A6 */ mtibatu 2 , context->r7
/* 803D7C4C 003D4A4C  7C D5 83 A6 */ mtibatl 2 , context->r6
/* 803D7C50 003D4A50  7C B4 83 A6 */ mtibatu 2 , context->r5
/*803D7C54 003D4A54*/ PPC::Runtime::ASM::isync();
/*803D7C58 003D4A58*/ PPC::Runtime::ASM::mfmsr(context->r3);
/*803D7C5C 003D4A5C*/ PPC::Runtime::ASM::ori(context->r3, context->r3, 0x30);
/*803D7C60 003D4A60*/ PPC::Runtime::ASM::mtsrr1(context->r3);
/*803D7C64 003D4A64*/ PPC::Runtime::ASM::mflr(context->r3);
/*803D7C68 003D4A68*/ PPC::Runtime::ASM::mtsrr0(context->r3);
/*803D7C6C 003D4A6C*/ PPC::Runtime::ASM::rfi();
}