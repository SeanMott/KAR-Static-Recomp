//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSInitThreadQueue.hpp"
#include "OSInitThreadQueue.hpp"



void fn_803D792C(PPC::Runtime::GCContext* context)
{
/*803D792C 003D472C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D7930 003D4730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D7934 003D4734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803D7938 003D4738*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D793C 003D473C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*803D7940 003D4740*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D7944 003D4744*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803D7948 003D4748*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D794C 003D474C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803D7950 003D4750*/ PPC::Runtime::ASM::bl(OSInitThreadQueue);
/*803D7954 003D4754*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8);
/*803D7958 003D4758*/ PPC::Runtime::ASM::bl(OSInitThreadQueue);
/*803D795C 003D475C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803D7960 003D4760*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D7964 003D4764*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803D7968 003D4768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803D796C 003D476C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*803D7970 003D4770*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D7974 003D4774*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D7978 003D4778*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D797C 003D477C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D7980 003D4780*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803D7984 003D4784*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D7988 003D4788*/ PPC::Runtime::ASM::blr();
}