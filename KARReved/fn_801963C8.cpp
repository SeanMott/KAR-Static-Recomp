//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022312C.hpp"
#include "fn_8000B024.hpp"
#include "fn_80223138.hpp"
#include "fn_8000A138.hpp"
#include "fn_8000A160.hpp"
#include "fn_80223148.hpp"
#include "fn_8000B108.hpp"
#include "fn_80223120.hpp"
#include "fn_8018D284.hpp"



void fn_801963C8(PPC::Runtime::GCContext* context)
{
/*801963C8 001931C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801963CC 001931CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801963D0 001931D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801963D4 001931D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801963D8 001931D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801963DC 001931DC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801963E0 001931E0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801963E4 001931E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801963E8 001931E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*801963EC 001931EC*/ PPC::Runtime::ASM::b(.L_80196478);
RUNTIME_PPC_JUMP_LABEL(.L_801963F0, 0x801963F0) //this is a jump label
/*801963F0 001931F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801963F4 001931F4*/ PPC::Runtime::ASM::bl(fn_8022312C);
/*801963F8 001931F8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801963FC 001931FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80196400 00193200*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80196404 00193204*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80196408 00193208*/ PPC::Runtime::ASM::bl(fn_8000B024);
/*8019640C 0019320C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196410 00193210*/ PPC::Runtime::ASM::beq(.L_80196424);
/*80196414 00193214*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196418 00193218*/ PPC::Runtime::ASM::bl(fn_80223138);
/*8019641C 0019321C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196420 00193220*/ PPC::Runtime::ASM::beq(.L_80196474);
RUNTIME_PPC_JUMP_LABEL(.L_80196424, 0x80196424) //this is a jump label
/*80196424 00193224*/ PPC::Runtime::ASM::bl(fn_8000A138);
/*80196428 00193228*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019642C 0019322C*/ PPC::Runtime::ASM::beq(.L_80196460);
/*80196430 00193230*/ PPC::Runtime::ASM::bl(fn_8000A160);
/*80196434 00193234*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196438 00193238*/ PPC::Runtime::ASM::bne(.L_80196460);
/*8019643C 0019323C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196440 00193240*/ PPC::Runtime::ASM::bl(fn_80223148);
/*80196444 00193244*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196448 00193248*/ PPC::Runtime::ASM::bne(.L_80196460);
/*8019644C 0019324C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80196450 00193250*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80196454 00193254*/ PPC::Runtime::ASM::bl(fn_8000B108);
/*80196458 00193258*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019645C 0019325C*/ PPC::Runtime::ASM::bne(.L_80196474);
RUNTIME_PPC_JUMP_LABEL(.L_80196460, 0x80196460) //this is a jump label
/*80196460 00193260*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196464 00193264*/ PPC::Runtime::ASM::bl(fn_80223120);
/*80196468 00193268*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8019646C 0019326C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r29));
/*80196470 00193270*/ PPC::Runtime::ASM::bl(fn_8018D284);
RUNTIME_PPC_JUMP_LABEL(.L_80196474, 0x80196474) //this is a jump label
/*80196474 00193274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80196478, 0x80196478) //this is a jump label
/*80196478 00193278*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8019647C 0019327C*/ PPC::Runtime::ASM::bne(.L_801963F0);
/*80196480 00193280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80196484 00193284*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80196488 00193288*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019648C 0019328C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196490 00193290*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80196494 00193294*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80196498 00193298*/ PPC::Runtime::ASM::blr();
}