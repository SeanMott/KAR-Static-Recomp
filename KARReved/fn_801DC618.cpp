//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005E08C.hpp"



void fn_801DC618(PPC::Runtime::GCContext* context)
{
/*801DC618 001D9418*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801DC61C 001D941C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DC620 001D9420*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801DC624 001D9424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC628 001D9428*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DC62C 001D942C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801DC630 001D9430*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r3));
/*801DC634 001D9434*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801DC638 001D9438*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r31));
/*801DC63C 001D943C*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801DC640 001D9440*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/*801DC644 001D9444*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801DC648 001D9448*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801DC64C 001D944C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/*801DC650 001D9450*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801DC654 001D9454*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x850, context->r31));
/*801DC658 001D9458*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801DC65C 001D945C*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801DC660 001D9460*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x850, context->r31));
/*801DC664 001D9464*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801DC668 001D9468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x854, context->r31));
/*801DC66C 001D946C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801DC670 001D9470*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801DC674 001D9474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x854, context->r31));
/*801DC678 001D9478*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801DC67C 001D947C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x858, context->r31));
/*801DC680 001D9480*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801DC684 001D9484*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801DC688 001D9488*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x858, context->r31));
/*801DC68C 001D948C*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801DC690 001D9490*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r31));
/*801DC694 001D9494*/ PPC::Runtime::ASM::bl(fn_8005E08C);
/*801DC698 001D9498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC69C 001D949C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DC6A0 001D94A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DC6A4 001D94A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801DC6A8 001D94A8*/ PPC::Runtime::ASM::blr();
}